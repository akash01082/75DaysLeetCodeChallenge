class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<bool> arr(n+1,false);
        for(int i=0;i<n;i++){
            arr[nums[i]]=true;
        }
        int res=-1;
        for( int i=0;i<arr.size();i++){
            if(!arr[i]){
                res=i;
            }
        }
        return res;
    }
};