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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int sumLeft = 1;
        int sumRight = 1;
        sumLeft = sumLeft + maxDepth(root->left);
        sumRight = sumRight + maxDepth(root->right);
        if (sumLeft > sumRight) {
            return sumLeft;
        }
        else {
            return sumRight;
        }
    }
};
