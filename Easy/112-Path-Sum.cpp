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
    bool fun(TreeNode* root, int target, int curr){
        if(!root) return false;
        if((root->left==nullptr) && (root->right==nullptr))
            return (curr+(root->val)==target);
        else
            return (fun(root->left,target,curr+(root->val)) || fun(root->right,target,curr+(root->val)));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return fun(root,targetSum,0); 
    }
};