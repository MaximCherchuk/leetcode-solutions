class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) {
            return 0;
        }
        set<int> s;
        int max_difference = 0;
        s.insert(prices.front());
        for(int i = 1; i < prices.size(); ++i) {
            max_difference = max(max_difference, prices[i] - *s.begin());
            s.insert(prices[i]);
        }
        return max_difference;
    }
};
