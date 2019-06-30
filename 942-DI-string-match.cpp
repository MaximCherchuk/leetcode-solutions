class Solution {
public:
    int find_min(const vector<int>& v) {
        int mn = 1000 * 1000;
        for(int i = 0; i < v.size(); ++i) {
            if(v[i] < mn) {
                mn = v[i];
            }
        }
        return mn;
    }
    
    void normalize(vector<int> &v) {
        const int min_value = find_min(v);
        const int sign = min_value > 0 ? -1 : 1;
        for(int i = 0; i < v.size(); ++i) {
            v[i] += min_value * sign;
        }
    }
    
    vector<int> diStringMatch(string S) {
        vector<int> ans;
        int is = count(S.begin(), S.end(), 'D');
        int min_value = is, max_value = is + 1;
        
        if(S[0] == 'I') {
            ans.push_back(min_value--);
        } else {
            ans.push_back(max_value++);
        }
        
        for(int i = 0; i < S.length(); ++i) {
            if(S[i] == 'D') {
                ans.push_back(min_value--);
            } else {
                ans.push_back(max_value++);
            }
        }
        
        normalize(ans);
        
        return ans;
    }
};