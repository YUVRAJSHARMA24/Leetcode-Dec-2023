class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int one = 0, zero = 0;
        int maxi = INT_MIN;

        for(auto i : s)
        {
            if(i == '1')
                one++;
        }

        for(int i = 0; i<n-1; i++)
        {
            if(s[i] == '1')
                one--;
            else
                zero++;

            maxi = max(maxi, zero + one);
        }

        return maxi;
    }
};
