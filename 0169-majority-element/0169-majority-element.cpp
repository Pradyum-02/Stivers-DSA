// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         return nums[n/2];
        
//     }
// };



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int ele = 0;

        for(int i=0; i<nums.size(); i++){
            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
            }
                else if (nums[i] == ele){
                    cnt++;
                }
                else {
                    cnt--;
                }
            }
            return ele;
        }
        
    
};