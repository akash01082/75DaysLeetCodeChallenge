class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int ls=sum;
        vector<int> leftSum(n,0);
        for(int i=0;i<n;i++){
            leftSum[i]=ls-nums[i];
            ls-=nums[i];
        }
        int rs=sum;
        vector<int> rightSum(n,0);
        for(int i=n-1;i>=0;i--){
            rightSum[i]=rs-nums[i];
            rs-=nums[i];
        }
        vector<int> res(n,0);
        for(int i=0;i<n;i++){
            res[i]=abs(leftSum[i]-rightSum[i]);
        }
        return res;
    }
};