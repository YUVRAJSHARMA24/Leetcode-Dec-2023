class Solution {
public:
    vector<vector<int>> direction
    {
        {-1, -1}, {-1,0}, {-1, 1},
        {0,-1}, {0,0}, {0, 1},
        {1, -1}, {1,0}, {1, 1}
    };
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();

        vector<vector<int>>ans(n, vector<int>(m, 0));
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                int sum = 0;
                int cnt = 0;

                for(auto &it : direction)
                {
                    int row = i + it[0];
                    int col = j + it[1];

                    if(row >= 0 && row < n && col >= 0 && col < m)
                    {
                        sum += img[row][col];
                        cnt++;
                    }
                }

                ans[i][j] = sum/cnt;
            }
        }

        return ans;
    }
};
