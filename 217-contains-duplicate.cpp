class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() < 2) {
            return false;
        }
        unordered_set<int> us;
        us.insert(nums.front());
        for(int i = 1; i < nums.size(); ++i) {
            if(us.find(nums[i]) != us.end()) {
                return true;
            }
            us.insert(nums[i]);
        }
        return false;
    }
};
