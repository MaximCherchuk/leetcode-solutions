class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int sum = accumulate(nums.begin(), nums.end(), 0);
        long long int total_sum = nums.size() * (nums.size() + 1) >> 1;
        return total_sum - sum;
    }
};
