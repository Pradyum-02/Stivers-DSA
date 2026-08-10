class Solution {
public:

    int countPairs(vector<int>& nums, int low, int mid, int high) {

        int right = mid + 1;
        int cnt = 0;

        for (int i = low; i <= mid; i++) {

            while (right <= high &&
                   (long long)nums[i] > 2LL * nums[right]) {
                right++;
            }

            cnt += right - (mid + 1);
        }

        return cnt;
    }


    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;

        int left = low;
        int right = mid + 1;

        // Merge two sorted halves
        while (left <= mid && right <= high) {

            if (nums[left] <= nums[right]) {

                temp.push_back(nums[left]);
                left++;

            } else {

                temp.push_back(nums[right]);
                right++;
            }
        }

        // Remaining elements from left half
        while (left <= mid) {

            temp.push_back(nums[left]);
            left++;
        }

        // Remaining elements from right half
        while (right <= high) {

            temp.push_back(nums[right]);
            right++;
        }

        // Copy back to nums
        for (int i = low; i <= high; i++) {

            nums[i] = temp[i - low];
        }
    }


    int mergeSort(vector<int>& nums, int low, int high) {

        int cnt = 0;

        if (low >= high)
            return cnt;

        int mid = low + (high - low) / 2;

        // Sort left half
        cnt += mergeSort(nums, low, mid);

        // Sort right half
        cnt += mergeSort(nums, mid + 1, high);

        // Count reverse pairs
        cnt += countPairs(nums, low, mid, high);

        // Merge both sorted halves
        merge(nums, low, mid, high);

        return cnt;
    }


    int reversePairs(vector<int>& nums) {

        int n = nums.size();

        return mergeSort(nums, 0, n - 1);
    }
};