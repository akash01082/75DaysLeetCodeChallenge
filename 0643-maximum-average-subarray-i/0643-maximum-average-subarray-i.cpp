class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double winSum=0;
        for(int i=0;i<k;i++){
            winSum+=nums[i];
        }
        double maxSum=winSum;
        for(int i=k;i<n;i++){
            winSum+=nums[i];
            winSum-=nums[i-k];
            maxSum=max(maxSum,winSum);
        }
        return maxSum/k;
    }
};