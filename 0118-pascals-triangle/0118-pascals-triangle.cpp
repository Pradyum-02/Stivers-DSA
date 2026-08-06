class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {

            long long value = 1;
            vector<int> ansrow;

            ansrow.push_back(1);

            for (int col = 1; col < row; col++) {

                value = value * (row - col);
                value = value / col;

                ansrow.push_back(value);
            }

            ans.push_back(ansrow);
        }

        return ans;
    }
};