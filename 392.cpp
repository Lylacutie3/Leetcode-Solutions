class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size = s.size();
        int sizet = t.size();
        int x = 0;

        for(int i = 0; i< sizet; i++){
            if(s[x] == t[i]){
                x++;
            }
        }

        if(x==size){
            return true;
        }
        return false;
    }
};