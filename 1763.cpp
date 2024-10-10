class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = word1.size();
        int len1 = word2.size();
        string s;
        int x, y;
        if(len < len1){
            for(int i = 0; i < len; i++){
                s += word1[i];
                s += word2[i];
            }
            for(int i = len; i<len1; i++){
                s += word2[i];
            }
        }else if(len > len1){
            for(int i = 0; i < len1; i++){
                s += word1[i];
                s += word2[i];
            }
            for(int i = len1; i<len; i++){
                s += word1[i];
            }

        }else{
        for(int i = 0; i < len; i++){
            s += word1[i];
            s += word2[i];
        }}

    return s;
    }
};