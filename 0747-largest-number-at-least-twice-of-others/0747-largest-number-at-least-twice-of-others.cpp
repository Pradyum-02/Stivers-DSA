class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = -1;
        int slargest = -1;
        int index = -1;

        for(int i=0; i < nums.size(); i++){
            if(nums[i] > largest){
                slargest = largest;
                largest = nums[i];
                index = i;
            }
            else if (nums[i] > slargest){
                slargest = nums[i];
            }
        }
        if(largest >= 2*slargest)
        return index;

        return -1;
        
    }
};