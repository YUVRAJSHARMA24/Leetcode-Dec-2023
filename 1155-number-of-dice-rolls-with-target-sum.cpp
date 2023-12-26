class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<long long>> diceRollWays(n+1, vector<long long>(target + 1));
        diceRollWays[0][0] = 1ll;
        int mod = 1e9 + 7;
        for(int diceNum = 1; diceNum <= n; diceNum++){
            for(int sum = 1; sum <= target; sum++){
                for(int faceNum = 1; faceNum <= min(sum , k); faceNum++){
                    int prevSum = sum - faceNum;
                        diceRollWays[diceNum][sum] = (diceRollWays[diceNum][sum] % mod  + diceRollWays[diceNum-1][prevSum] % mod) % mod;
                }
            }
        }
        return diceRollWays[n][target];
    }
};
