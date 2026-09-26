// this is a copy solution new code will be written soon.......

class Solution {
public:
    string removeKdigits(string num, int k) {
        string result = "";
        
        for (char digit : num) {
            // Remove previous larger digits if we still have k removals left
            while (k > 0 && !result.empty() && result.back() > digit) {
                result.pop_back();
                k--;
            }
            result.push_back(digit);
        }
        
        // Remove remaining digits from the end if k > 0
        while (k > 0 && !result.empty()) {
            result.pop_back();
            k--;
        }
        
        // Find the first non-zero character to strip leading zeros
        int startIdx = 0;
        while (startIdx < result.length() && result[startIdx] == '0') {
            startIdx++;
        }
        result = result.substr(startIdx);
        
        // Return "0" if the final string is empty
        return result.empty() ? "0" : result;
    }
};