class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(n+1);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        int a=0,b=0;
        for(int i=1;i<count.size();i++){
            if(count[i]==2) a=i;
            if(count[i]==0) b=i;
            if(a && b) break;
        }
        vector<int> res;
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};