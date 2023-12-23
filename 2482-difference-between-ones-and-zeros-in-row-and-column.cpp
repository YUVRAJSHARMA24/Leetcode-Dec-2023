class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int>oneRow(n, 0);
        vector<int>oneCol(m, 0);
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(grid[i][j] == 1)
                {
                    oneRow[i]++;
                    oneCol[j]++;
                }
            }
        }

        vector<vector<int>> diff(n, vector<int>(m, 0));
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                int oneRowi = oneRow[i];
                int oneColj = oneCol[j];

                int zeroRowi = n - oneRow[i];
                int zeroColj = m -oneCol[j];

                diff[i][j] = oneRowi + oneColj - zeroRowi - zeroColj;
            }
        }

        return diff;
    }
};
