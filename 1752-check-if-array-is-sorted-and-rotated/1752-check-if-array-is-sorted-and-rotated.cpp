class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int i;
        for(i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])
               break;
        }
        if(i==n-1) return true;
        i++;
        for( ;i<n-1;i++){
            if(nums[i]<=nums[i+1]  && nums[i]<=nums[0])
                continue;
            else return false;
        }
        if(nums.back() > nums[0]) return false;
        return true;
    }
};