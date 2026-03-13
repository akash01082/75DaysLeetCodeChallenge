class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int it=0;it<n-1;it++){
            if(nums[it]==nums[it+1])
            return true;
        }
        return false;
    }
};