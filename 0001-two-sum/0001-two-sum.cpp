class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int st=0;st<nums.size();st++){
            for(int end=st+1;end<nums.size();end++){
                if(nums[st]+nums[end]==target && st!=end){
                    ans.push_back(st);
                    ans.push_back(end);
                    break;
                }
            }
        }
        return ans;
    }
};