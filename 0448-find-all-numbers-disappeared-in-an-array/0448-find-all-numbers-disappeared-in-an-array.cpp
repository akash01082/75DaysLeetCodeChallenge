class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n+1,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int> res;
        for(int i=1;i<freq.size();i++){
            if(freq[i]==0) res.push_back(i);
        }
        return res;
    }
};