class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxP = 0;
        for(auto &it: prices){
            int price = it - minPrice;
            maxP = max(maxP, price);
            minPrice = min(minPrice,it);
        }
        return maxP;
    }
};