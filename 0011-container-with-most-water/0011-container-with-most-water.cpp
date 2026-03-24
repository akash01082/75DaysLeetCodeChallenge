class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxWc=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int width = j-i;
            int curr = h*width;
            maxWc = max(maxWc,curr);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }     
        }
        return maxWc;
    }
};