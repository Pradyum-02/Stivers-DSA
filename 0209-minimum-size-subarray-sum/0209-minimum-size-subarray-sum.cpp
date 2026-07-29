class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;

        for(int r=0; r < nums.size(); r++){
            sum += nums[r];

            while(sum >= target){

            minLen = min(minLen, r - left + 1);
            sum -= nums[left];
            left++;
        }
        
    }

    return minLen == INT_MAX ? 0 : minLen;
    }
};
