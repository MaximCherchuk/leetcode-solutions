class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> vs;
        size_t open = 0, close = 0, begin = 0;
        for(int i = 0; i < s.length(); ++i) {
            if(s[i] == '(') {
                ++open;
            } else {
                ++close;
            }
            if(open == close) {
                string str = s.substr(begin + 1, i - begin - 1);
                vs.push_back(str);
                begin = i + 1;
                open = close = 0;
            }
        }
        string ans = vs.size() > 0 ? vs[0] : "";
        for(int i = 1; i < vs.size(); ++i) {
            ans += vs[i];
        }
        return ans;
    }
};
