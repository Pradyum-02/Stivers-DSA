class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size(), ans = 0, last = -1;
        vector<vector<bool>> p(n, vector<bool>(n));

        for(int i=n-1;i>=0;i--)
            for(int j=i;j<n;j++)
                p[i][j] = s[i]==s[j] && (j-i<2 || p[i+1][j-1]);

        for(int j=0;j<n;j++)
            for(int i=last+1;i<=j-k+1;i++)
                if(p[i][j]) {
                    ans++;
                    last=j;
                    break;
                }

        return ans;
    }
};