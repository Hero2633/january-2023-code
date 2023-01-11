#include<stdio.h>
#include<stdlib.h>
struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
int sum=0;
void PrevOr(struct TreeNode*root,int val)
{
    if(root==NULL)
    return;
    if(root->left==root->right&&root->left==NULL)
    {
        sum=sum+val*2+root->val;
    }
    val=val*2+root->val;
    PrevOr(root->left,val);
    PrevOr(root->right,val);
}
int sumRootToLeaf(struct TreeNode* root){
        int val=0;
        sum=0;
        PrevOr(root,val);
        return sum;
}
int Post_order(struct TreeNode*root,int*ret)
{
    if(!root)
    return 0;
    int left=Post_order(root->left,ret);
    int right=Post_order(root->right,ret);
        *ret=abs(left-right)+*ret;
        return left+right+root->val;
}
int findTilt(struct TreeNode* root){
            int sum=0;
            Post_order(root,&sum);
            return sum;
}
