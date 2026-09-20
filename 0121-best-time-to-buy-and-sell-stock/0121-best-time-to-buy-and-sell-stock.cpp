class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
        return 0;
        int n=prices.size();
         int minimum=prices[0];
         int maximum=0;

        for(int i=0;i<n;i++){
            minimum=min(minimum,prices[i]);
            maximum=max(maximum,prices[i]-minimum);
    //         if(prices[i]<minimum){
    //             minimum=prices[i];
    //         }
    //         int profit=prices[i]-minimum;
    //         if(profit>maximum){
    //             maximum=profit;
    //         }
         }
        return maximum;
     }

};