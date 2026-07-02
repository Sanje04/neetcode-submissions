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
    bool isBalanced(TreeNode* root) {
        stack<TreeNode*> stack;
        TreeNode* node = root;
        unordered_map<TreeNode*, int> depths;
        TreeNode* last = nullptr;

        while (!stack.empty() || node != nullptr){
            if (node != nullptr){
                stack.push(node);
                node=node->left;
            } else {
                node = stack.top();
                if (node->right == nullptr || last == node->right){
                    stack.pop();
                    int left = depths[node->left];
                    int right = depths[node->right];
                    if (abs(left - right) > 1){
                        return false;
                    }
                    last = node;
                    depths[node] = 1 + max(left,right);
                    node = nullptr;
                } else {
                    node = node->right;
                }
            }

        }

        return true;
        
    }
};
