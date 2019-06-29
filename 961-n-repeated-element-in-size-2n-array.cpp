class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int, int> m;
        for(int i = 0; i < A.size(); ++i) {
            int element = A[i];
            if(!m[element]) {
                m[element] = 1;
            } else {
                return element;
            }
        }
        return 0;
    }
};