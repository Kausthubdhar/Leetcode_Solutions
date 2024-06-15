/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void fun(TreeNode* root, vector<int>& res){
        if(!root) return;
        res.push_back(root->val);
        fun(root->left, res);
        fun(root->right,res);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        fun(root,res);
        return res;
    }
};