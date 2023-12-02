class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;
        for(auto i : chars)
            mp[i]++;
        
        bool flag = true;
        string res = "";
        
        for(auto str : words)
        {
            flag = true;
            unordered_map<char, int> freq;
            for(auto it : str)
                freq[it]++;
            
            for(auto it : str)
            {
                if(freq[it] > mp[it])
                    flag = false;
            }
            
            if(flag == true)
                res += str;
        }
        
        return res.length();
    }
};
