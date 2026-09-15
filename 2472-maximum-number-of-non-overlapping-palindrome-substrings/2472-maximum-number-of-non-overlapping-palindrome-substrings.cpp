// ChatGPT Version

class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size(), ans = 0, last = -1;

        // p[i][j] = true if s[i...j] is a palindrome
        vector<vector<bool>> p(n, vector<bool>(n));

        // Build palindrome table
        for(int i = n - 1; i >= 0; i--)
            for(int j = i; j < n; j++)
                p[i][j] = s[i] == s[j] &&
                          (j - i < 2 || p[i + 1][j - 1]);

        // Find non-overlapping palindromes
        // j = ending position of the palindrome
        for(int j = 0; j < n; j++)
            for(int i = last + 1; i <= j - k + 1; i++)

                // If s[i...j] is a palindrome of length >= k
                if(p[i][j]) {
                    ans++;

                    // Next palindrome must start after j
                    last = j;
                    break;
                }

        return ans;
    }
};