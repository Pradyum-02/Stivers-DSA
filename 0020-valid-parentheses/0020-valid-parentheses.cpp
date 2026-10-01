class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {

            // If opening bracket, push its matching closing bracket
            if (c == '(')
                st.push(')');

            else if (c == '{')
                st.push('}');

            else if (c == '[')
                st.push(']');

            // If closing bracket
            else {
                // If stack is empty OR bracket doesn't match
                if (st.empty() || st.top() != c)
                    return false;

                // Matching bracket found, remove it
                st.pop();
            }
        }

        // If stack is empty, all brackets were matched
        return st.empty();
    }
};