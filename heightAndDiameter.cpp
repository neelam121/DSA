#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int calcHeight(Node *root){
    if(root==NULL){
        return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);
    return max(lHeight,rHeight)+1;
}
int diameter(Node *root){
    if(root==NULL){
        return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);
    int currDiameter=lHeight+rHeight+1;
    int lDiameter=diameter(root->left);
    int rDiameter=diameter(root->right);
    return max(currDiameter,max(lDiameter,rDiameter));
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    //height of binary tree
    cout<<calcHeight(root)<<endl;
    //diameter of binary tree
    cout<<diameter(root)<<endl;

}