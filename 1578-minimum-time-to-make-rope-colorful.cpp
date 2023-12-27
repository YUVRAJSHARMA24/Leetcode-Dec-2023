class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int m = neededTime.size();
        int minTime = 0, prev = 0;
        for(int i = 1; i<n; i++)
        {
            if(colors[prev] != colors[i])
                prev = i;
            else
            {
                if(neededTime[prev] < neededTime[i])
                {
                    minTime += neededTime[prev];
                    prev = i;
                }
                else
                    minTime += neededTime[i];
            }
        }

        return minTime;
    }
};
