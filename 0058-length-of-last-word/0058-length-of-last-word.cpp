class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool gap1=false;
        bool gap2=false;
        for(int i=s.size()-1;i>=0;i--){
            if(gap2) break;
            if(s[i]!=' '){
                count++;
                gap1=true;
            }else{
                if(gap1) gap2=true;
            }
        }
        return count;
    }
};