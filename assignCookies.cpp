class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int child = 0;
        int cookie = 0;
        int happy = 0;

        while(child < g.size() && cookie < s.size()){
          if(s[cookie] >= g[child])
          {
            child++;
            cookie++;
            happy++;
          }
          else if(s[cookie]==g[child])
          {
            cookie++;
            child++;
            happy++;
          }
          else {
            cookie++;
          }
        }
        return happy;

    }
};
