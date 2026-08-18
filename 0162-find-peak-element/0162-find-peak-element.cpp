class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;

        while(low < high) {

            int mid = low + (high - low) / 2;

            if(nums[mid] > nums[mid + 1]) {
                // We are going down,
                // so peak is at mid or on the left
                high = mid;
            }
            else {
                // We are going up,
                // so peak is on the right
                low = mid + 1;
            }
        }

        return low;
    }
};