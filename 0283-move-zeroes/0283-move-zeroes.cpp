class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        while(k<n){
            if(nums[k]==0)
                break;
            k++;
        }
        for(int i=k+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[k]);
                k++;
            }
        }
    }
};