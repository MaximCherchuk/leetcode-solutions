class Solution {
private:
    int length;
public:
    int next_index(int left, int right, vector<int>& A) {
        if(left == 0 && right == length - 1) {
            return -1;
        }
        if(left == 0) {
            return right + 1;
        }
        if(right == length - 1) {
            return left - 1;
        }
        if(abs(A[left - 1]) < abs(A[right + 1])) {
            return left - 1;
        } else {
            return right + 1;
        }
    }
    
    int find_min(vector<int>& A) {
        int min_elem = 1000 * 1000 * 1000;
        int min_element_value;
        for(int i = 0, min_abs; i < A.size(); ++i) {
            min_abs = abs(A[i]);
            if(min_abs < min_elem) {
                min_elem = min_abs;
                min_element_value = A[i];
            }
        }
        return min_element_value;
    }

    int find_index(vector<int>& A, int min_elem) {
        for(int i = 0; i < A.size(); ++i) {
            if(A[i] == min_elem) {
                return i;
            }
        }
        return 0;
    }

    vector<int> sortedSquares(vector<int>& A) {
        length = A.size();
        int min_elem = find_min(A);
        int index = find_index(A, min_elem);
        int left = index, right = index;
        vector<int> ans;
        ans.reserve(length);
        ans.push_back(min_elem * min_elem);
        while(true) {
            index = next_index(left, right, A);
            if(index == -1) break;
            if(index < left) {
                left = index;
            } else {
                right = index;
            }
            ans.push_back(A[index] * A[index]);
        }
        return ans;
    }
};
