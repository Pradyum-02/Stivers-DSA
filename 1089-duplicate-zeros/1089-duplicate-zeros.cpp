class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int zero = 0;
        int n = arr.size();

        // Count zeros
        for(int num:arr){
            if(num == 0)
            zero++;

        }

        int i=n-1;
        int j = n+zero-1;
        while(i<j){
            if(j<n)
            arr[j]=arr[i];
            if(arr[i]==0){
                j--;
                if(j<n)
                arr[j]=0;
            }
            i--;
            j--;
        }
    }
};