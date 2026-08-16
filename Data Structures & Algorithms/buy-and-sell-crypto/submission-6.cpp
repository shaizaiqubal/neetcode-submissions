class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int profit = 0;
        while(sell<prices.size()){
            int diff = prices[sell]-prices[buy];
            if(diff>0){
                if(diff>profit){
                    profit = diff;
                }
            }
            else{
                buy = sell;    
            }
            sell++;
        }
        return profit;
    }
};
