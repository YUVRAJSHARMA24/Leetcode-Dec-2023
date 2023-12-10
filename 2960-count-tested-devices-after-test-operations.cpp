class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n = batteryPercentages.size();
        int cnt = 0, dec = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(batteryPercentages[i] > 0)
            {
                int currDevice = batteryPercentages[i] - dec;
                if(currDevice > 0) 
                {
                    cnt++;
                    dec++;
                }
            }
        }
        
        return cnt;
    }
};
