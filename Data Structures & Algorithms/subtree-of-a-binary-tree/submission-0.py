# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not subRoot:
            return True

        if not root:
            return False

        if self.sameTree(root, subRoot):
            return True
        
        checkLeftSubTree = self.isSubtree(root.left, subRoot)
        checkRightSubTree = self.isSubtree(root.right, subRoot)

        if (checkLeftSubTree or checkRightSubTree):
            return True

        return False
    
    def sameTree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not root and not subRoot:
            return True
        
        if (root and subRoot and root.val == subRoot.val):
            leftTree = self.sameTree(root.left, subRoot.left)
            rightTree = self.sameTree(root.right, subRoot.right)

            if (leftTree and rightTree):
                return True

        return False
    
        
        
        