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
    int M = 1;
    void preorder(TreeNode *root, int d){
        if(!root) return;
        M = max(M,d);
        preorder(root->left,d+1);
        preorder(root->right,d+1);
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        preorder(root,1);
        return M;
    }
};