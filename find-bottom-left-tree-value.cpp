


/**

https://leetcode.com/problems/find-bottom-left-tree-value/#/description

 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
**/ 
    
class Solution {
public:

    int findBottomLeftValue(TreeNode* root) 
    {
        int maxdepth=0;
        
        int result=root->val;
        
      findBottomLeftValue(root,maxdepth,0,result);
      return result;
    }
    
   void findBottomLeftValue(TreeNode* root, int& maxdepth, int depth ,int& res) 
    {
        if(root==NULL)
        {
            return;
        }
        else
        {
            findBottomLeftValue(root->left, maxdepth, depth+1, res);
            findBottomLeftValue(root->right, maxdepth, depth+1, res);
            
            if(depth > maxdepth)
            {
                maxdepth=depth;
                res=root->val;
                
            }
            
        }
    }

 
};