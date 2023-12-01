class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i=0, j=0, s1=0, s2 = 0;
        while(i<word1.size() && j<word2.size())
        {
            if(word1[i][s1++] != word2[j][s2++])
                return false;
            
            if(s1 == word1[i].size())
                i++, s1=0;
            
            if(s2 == word2[j].size())
                j++, s2=0;
        }
        
        return i == word1.size() && j == word2.size();
    }
};
