class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // First pass : Mark visited numbers

        for (int i=0; i<nums.size(); i++){
            int index = abs(nums[i])-1;
            nums[index] = -abs(nums[index]);
        }
        // Second pass : colleect missing numbers and store in ans.
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
        
    }
};