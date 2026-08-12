class Solution {
public:
    int countTriplets(vector<int>& arr) {
        unordered_map<int, int> cnt;
        unordered_map<int, int> sumindex;

        int xr = 0;
        int ans = 0;

        cnt[0] = 1;
        sumindex[0] = 0;

        for(int k=0; k<arr.size(); k++){
            xr ^= arr[k];
            if (cnt.find(xr) != cnt.end()){
                ans += cnt[xr]*k-sumindex[xr];
            }
            cnt[xr]++;
            sumindex[xr] += k + 1;
        }
        return ans;
        
    }
};