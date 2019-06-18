/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int ans = 0;
        if(root) {
            if(root->val >= L && root->val <= R) {
                ans += root->val;
            }
            ans += rangeSumBST(root->left, L, R);
            ans += rangeSumBST(root->right, L, R);
        }
        return ans;
    }
};
