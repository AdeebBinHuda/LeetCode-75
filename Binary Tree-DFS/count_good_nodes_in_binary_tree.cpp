/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)-  : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public int goodNodes(TreeNode root) {
        return countGood(root, 0, Integer.MIN_VALUE);
    }
        
    private int countGood(TreeNode root,int ans, int curMax){
            if(root == null){
                return 0;
            }
            int rootAns = 0;
            if(root.val>=curMax){
                rootAns = 1;
                curMax = root.val; 
            }

            int lens= countGood(root.left,ans,curMax);
            int rens= countGood(root.right,ans,curMax);
            return lens+rens+rootAns;
        }
}