/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
private:
    bool started = false;
public:
    vector<int> preorder(Node* root) {
        if(!root) {
            return vector<int>();
        }
        vector<int> ans;
        if(!started) {
            started = true;
            ans.push_back(root->val);
        }
        for(int i = 0; i < root->children.size(); ++i) {
            ans.push_back(root->children[i]->val);
            vector<int> from_func = preorder(root->children[i]);
            ans.insert(ans.end(), from_func.begin(), from_func.end());
        }
        return ans;
    }
};