//Reshape the Matrix
//https://leetcode.com/problems/reshape-the-matrix/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        // If the total number of elements doesn't match, the reshape is impossible
        if (m * n != r * c) {
            return mat;
        }
        
        // Initialize the new reshaped matrix with r rows and c columns
        vector<vector<int>> result(r, vector<int>(c));
        
        // Map the elements using a single loop
        for (int i = 0; i < m * n; i++) {
            // i / n gives the original row, i % n gives the original column
            // i / c gives the new row, i % c gives the new column
            result[i / c][i % c] = mat[i / n][i % n];
        }
        
        return result;
    }
};
