//https://leetcode.com/problems/average-of-levels-in-binary-tree/
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode* > qu;
        vector<double> vec;
        qu.push(root);
        while(!qu.empty())
        {
            int n = qu.size();
            double sum = 0;
            for(int i=0; i<n; i++)
            {
                TreeNode* node = qu.front();
                if(node->left!=NULL) qu.push(node->left);
                if(node->right!=NULL) qu.push(node->right);
                sum+=node->val;
                qu.pop();
            }
            vec.push_back(sum/n);
        }
        return vec;
    }
};