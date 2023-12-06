class Solution {
public:
    int totalMoney(int n) {
        int week = n/7;
        int rem_days = n%7;
        int a1 = 28;
        int an = 28 + (week-1) * 7;
        
        int res = week * (a1 + an) / 2;
        
        int money = 1 + week;
        for(int i = 1; i<= rem_days; i++)
        {
            res += money;
            money++;
        }
        
        return res;
    }
};
