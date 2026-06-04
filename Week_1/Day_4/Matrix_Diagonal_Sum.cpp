// Matrix Diagonal Sum
// https://leetcode.com/problems/matrix-diagonal-sum/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int total_sum = 0;
        
        for (int i = 0; i < n; i++) {
            // Add element from the primary diagonal
            total_sum += mat[i][i];
            
            // Add element from the secondary diagonal
            total_sum += mat[i][n - 1 - i];
        }
        
        // If n is odd, the center element was added twice, so subtract it once
        if (n % 2 != 0) {
            total_sum -= mat[n / 2][n / 2];
        }
        
        return total_sum;
    }
};
