class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans, divisors;
        for(int i = left; i <= right; ++i) {
            if(i < 10) {
                ans.push_back(i);
                continue;
            }
            int current = i;
            divisors.clear();
            bool yes = true;
            while(current) {
                int divisor = current % 10;
                if(!divisor) {
                    yes = false;
                    break;
                }
                divisors.push_back(divisor);
                current /= 10;
            }
            if(!yes) {
                continue;
            }
            yes = true;
            for(int divisor : divisors) {
                if(i % divisor != 0) {
                    yes = false;
                }
            }
            if(yes) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};