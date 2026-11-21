class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (m * n != r * c) return mat;
        vector<vector<int>> result(r, vector<int>(c));
        for (int k = 0; k < m * n; k++) {
            result[k / c][k % c] = mat[k / n][k % n];
        }
        return result;
    }
};
