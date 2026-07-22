class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;

        //To find first zero
        for (int i=0; i<n; i++){
            if(nums[i] == 0){
                j=i;
                break;
            }
        }
        //if no zero is present
        if(j == -1)
        return;

        //move non zero elements forward
        for (int i = j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        
    }
};