class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(char ch: s){
            if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
                if(ch>='A' && ch<='Z')
                    ch=ch-'A'+'a';
                res+=ch;
            }
        }
        string revAns=res;
        reverse(res.begin(),res.end());
        if(res==revAns)
            return true;
        else return false;
    }
};