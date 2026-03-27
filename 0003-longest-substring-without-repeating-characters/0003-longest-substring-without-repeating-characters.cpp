class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> tem(256,-1);
        int left=0,result=0;
        for(int i=0;i<s.size();i++){
            if(tem[s[i]]>=left){
                left=tem[s[i]]+1;
            }
            tem[s[i]]=i;
            result=max(result,i-left+1);
        }
        return result;
    }
};