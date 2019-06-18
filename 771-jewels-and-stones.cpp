class Solution {
public:

    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(const char c : J) {
            for(const char cc : S) {
                if(c == cc) {
                    ++count;
                }
            }
        }
        return count;
    }
};
