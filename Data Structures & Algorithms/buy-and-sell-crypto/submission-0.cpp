class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=1+i;j<prices.size();j++)
            {
                profit= max(profit,prices[j]-prices[i]);
                
            }
        }
        return profit;
    }
};
