class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char, int> mp;
        
        for(auto &word : words)
        {
            for(auto &ch : word)
                mp[ch]++;
        }

        for(auto &it : mp)
        {
            if(it.second%n != 0){
                return false;
            }
        }
        
        return true;
    }
};
