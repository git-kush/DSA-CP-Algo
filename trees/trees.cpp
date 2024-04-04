#include <bits/stdc++.h>

using namespace std;

//TREES

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    public:
    TreeNode(int d=-1, TreeNode* l=NULL, TreeNode* r=NULL){
        data = d;
        left = l;
        right = r;
    }

};

//DFS

void preorder_transversal(TreeNode* Treenode){ //rolr
    if(Treenode == NULL) return;

    cout<<Treenode->data;
    preorder_transversal(Treenode->left);
    preorder_transversal(Treenode->right);

}

void inorder_transversal(TreeNode* Treenode){  //lror
    if(Treenode == NULL) return;

    inorder_transversal(Treenode->left);
    cout<<Treenode->data;
    inorder_transversal(Treenode->right);
    
}

void postorder_transversal(TreeNode* Treenode){  //lrro
    if(Treenode == NULL) return;

    postorder_transversal(Treenode->left);
    postorder_transversal(Treenode->right);
    cout<<Treenode->data;

    
}

void iterative_pre(TreeNode* root){
    
}

//BFS

vector<vector<int>> levelOrder(TreeNode * root){
    // Write your code here.
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            TreeNode* TreeNode = q.front();
            q.pop();
            if(TreeNode->left != nullptr) q.push(TreeNode->left);
            if(TreeNode->right != nullptr) q.push(TreeNode->right);
            level.push_back(TreeNode->data);
        }
        ans.push_back(level);
    }

    return ans;
}



int main(){

}