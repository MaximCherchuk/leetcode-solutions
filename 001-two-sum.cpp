class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        vector<pair<int, int>> vp;
        vector<int> answer;
        for(int i = 0; i < nums.size(); ++i) {
            vp.push_back(make_pair(nums[i], i));
        }
        sort(vp.begin(), vp.end());
        while(i < j) {
            if(vp[i].first + vp[j].first > target) {
                --j;
            } else if(vp[i].first + vp[j].first < target) {
                ++i;
            } else {
                answer.push_back(vp[i].second);
                answer.push_back(vp[j].second);
                break;
            }
        }
        return answer;
    }
};
