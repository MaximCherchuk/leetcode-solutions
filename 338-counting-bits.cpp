class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> answer;
        for(int i = 0; i <= num; ++i) {
            int total_bits = count(i);
            answer.push_back(total_bits);
        }
        return answer;
    }
    int count(int number) {
        int total_bits = 0;
        while(number) {
            total_bits += number % 2;
            number >>= 1;
        }
        return total_bits;
    }
};
