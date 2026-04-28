class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1,res=nums[0];
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
                if(count>n/2)
                    res=nums[i];
            }
            else
                count=1;
        }
        return res;
    }    
        
};