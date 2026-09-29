# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        # edge case
        if not root:
            return 0
        
        depthLeft = self.maxDepth(root.left)
        depthRight = self.maxDepth(root.right)

        depth = 1+ max(depthLeft, depthRight)

        return depth