class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=nums.size();
        if(nums.size()==1){
            if(val==nums[0]) return 0;
            else return k;
        }
        int n=nums.size()-1;
        int i=0;
        while(i<=n){
            if(nums[i]==val){
                while(i<n && nums[n]==val){
                    n--;
                    k--;
                }
                swap(nums[i],nums[n]);
                n--;
                k--;
            }
            i++;
        }
        return k;
    }
};