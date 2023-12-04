class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        char ch = ' ';
        for(int i = 2; i<n; i++)
        {
            if(num[i] == num[i-1] && num[i] == num[i-2])
                ch = max(ch, num[i]);
        }
        
        return ch == ' ' ? "" : string(3, ch);
    }
};
