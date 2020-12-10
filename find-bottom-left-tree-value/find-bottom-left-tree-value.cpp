/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        queue <TreeNode *> q;
        q.push(root);
        int ans;
        while(!q.empty()){
            
          int size = q.size();
          ans = q.front()->val;
            
          for(int i =0; i<size; i++){
            TreeNode *temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);    
          }
        }
    return ans;    
    }
};
