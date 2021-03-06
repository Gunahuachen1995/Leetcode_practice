/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        helper(root, 0, res);
        for(int i = 0; i < res.size(); i++) {
            if(i%2!=0)
                reverse(res[i].begin(), res[i].end());
        }
        return res;
    }
    
    void helper(TreeNode* root, int level, vector<vector<int>>& res) {
        if(!root)   return;
        if(level >= res.size()) res.push_back(vector<int>{});
        
        res[level].push_back(root->val);
        
        helper(root->left, level + 1, res);
        helper(root->right, level + 1, res);
    }
};
