class Solution {
public:
    string largestOddNumber(string num) {
        int mostOddIdx=-1;
        for(int i=0;i<num.size();i++){
            int val=num[i]-'0';
            if(val%2!=0) mostOddIdx=i;
        }
        if(mostOddIdx==-1) return "";
        return num.substr(0,mostOddIdx+1);
    }
};