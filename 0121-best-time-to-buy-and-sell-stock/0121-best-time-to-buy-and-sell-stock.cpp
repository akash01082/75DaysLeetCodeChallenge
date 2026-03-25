class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int N=prices.size();
        vector<int> bestBuy(N);
        bestBuy[0]=prices[0];
        int currProfit,maxProfit=0;
        for(int i=1;i<N;i++){
            bestBuy[i]=min(prices[i-1],bestBuy[i-1]);
            currProfit=prices[i]-bestBuy[i];
            maxProfit=max(currProfit,maxProfit);
        }
        return maxProfit;
    }
};