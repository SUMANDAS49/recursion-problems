#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int data;
    tree *left;
    tree *right;
};
tree *insertNode(tree *root, int data)
{
    tree *t = new tree();
    if (root == NULL)
    {
        
        t->left = NULL;
        t->right = NULL;
        t->data = data;
        root = t;
        return root;
    }
    if(root->data>data)
    root->left=insertNode(root->left,data);
    else
    root->right=insertNode(root->right,data);
    return root;

}
void inorder(tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int height(tree *root){
    if(root==NULL)
    {
        return 0;
    }
    int l=height(root->left);
    int r=height(root->right);
    return 1+(l>r?l:r);
}
int main()
{
    tree *root=NULL;
    int n;
    cout<<"How many elements you want to insert into the tree?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cout<<"enter data"<<endl;
        cin>>d;
        root=insertNode(root,d);
    }
    inorder(root);
    cout<<endl;
    cout<<height(root);

}