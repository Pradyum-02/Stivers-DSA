// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {

//         int ans = 0;

//         for (int i = 0; i < nums.size(); i++){
//             ans ^= nums[i];
//         }
//         return ans;
        
//     }
// };

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while(low < high){
            int mid = low+(high - low)/2;

            // make mid even
            if(mid % 2 == 1)
                mid--;
            if(nums[mid] == nums[mid + 1]){
                // pair correct and single element is on right
                low = mid+2;

            }
            else{
                // pair is broken and single element is on left
                high = mid;
            }
        }
        return nums[low];
        
    }
};