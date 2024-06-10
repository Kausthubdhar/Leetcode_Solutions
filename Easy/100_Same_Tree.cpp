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
    void preorder(TreeNode *root, vector<int>& a){
        if(!root){
            a.push_back(INT_MIN);
            return;
        }
        a.push_back(root->val);
        preorder(root->left,a);
        preorder(root->right,a);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> tree1, tree2;
        preorder(p,tree1);
        preorder(q,tree2);
        int n = tree1.size(), m = tree2.size();
        if(n != m) return 0;
        for(int i=0; i<n; ++i){
            if(tree1[i] != tree2[i]) return 0;
        }
        return 1;
    }
};