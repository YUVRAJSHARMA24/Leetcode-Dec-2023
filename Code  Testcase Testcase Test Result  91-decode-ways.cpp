class Solution {
public:
    int dp[101];
    int solve(string s, int i, int n)
    {
        if(dp[i] != -1)
            return dp[i];

       if(i == n)
           return dp[i] = 1;

       if(s[i] == '0')
           return dp[i] = 0;

       int ans = solve(s, i+1, n);

       if(i+1 < n)
       {
           if(s[i] == '1' || (s[i] == '2' && s[i+1] <= '6')){
               ans += solve(s, i+2, n);
           }
       }  
       return dp[i] = ans;      
    }

    int numDecodings(string s) {
        int n = s.size();
        memset(dp, -1, sizeof(dp));
        return solve(s, 0, n);
    }
};
