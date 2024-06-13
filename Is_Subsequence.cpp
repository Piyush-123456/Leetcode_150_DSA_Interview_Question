class Solution {
public:
    bool isSubsequence(string s, string t) {
       int sindex = 0;
       int tindex = 0;
       while(tindex<t.size() && sindex<s.size()){
            if(s[sindex]==t[tindex]){
                sindex++;
            }
            tindex++;
       }
       return sindex==s.size();
    }
};
