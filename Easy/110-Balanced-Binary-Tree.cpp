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
    pair<bool,int> checkB(TreeNode* root){
        if(!root) return {true,0};
        pair<bool,int> left = checkB(root->left), right = checkB(root->right);
        bool isTrue = (left.first && right.first && (abs(left.second-right.second) <= 1));
        return {isTrue, 1 + max(left.second, right.second)};
    }

    bool isBalanced(TreeNode* root) {
        pair<bool,int> temp = checkB(root);
        return temp.first;
    }
};