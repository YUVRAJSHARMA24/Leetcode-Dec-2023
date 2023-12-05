class Solution {
public:
    int numberOfMatches(int n) {
        int cnt = 0;
        int num = n;
        while(num > 1)
        {
            if(num%2 == 1)
                cnt++;
            
            cnt += num/2;
            
            num /= 2;
        }
        
        return cnt;
    }
};
