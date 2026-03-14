class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> check(26,0);
        for(char &ch: s){
            int n=(int)(ch-'a');
            check[n]++;
        }
        for(char &ch: t){
            int n=(int)(ch-'a');
            check[n]--;
        }
        for(int it=0;it<check.size();it++){
            if(check[it]!=0)
                return false;
        }
        return true;
    }
};