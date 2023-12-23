class Solution {
public:
    bool isPathCrossing(string path) {
      int x = 0, y = 0;
      unordered_set<string> st;
      int n = path.size();
      string key = to_string(x)+"_"+to_string(y);
      st.insert(key);
      for(int i = 0; i<n; i++)
      {
          if(path[i] == 'N') x++;
          else if(path[i] == 'S') x--;
          else if(path[i] == 'E') y++;
          else if(path[i] == 'W') y--;

          key = to_string(x)+"_"+to_string(y);
          if(st.find(key) != st.end()) return true;

          st.insert(key);
      }
      return false;  
    }
};
