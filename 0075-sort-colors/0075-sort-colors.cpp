class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int countZ=0;
        int countO=0;
        int countT=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) countZ++;
            else if(nums[i]==1) countO++;
            else countT++;
        }
        for(int i=0;i<n;i++){
            if(countZ!=0){
                nums[i]=0;
                countZ--;
            }else if(countO!=0){
                nums[i]=1;
                countO--;
            }else{
                nums[i]=2;
                countT--;
            }
        }
    }
};