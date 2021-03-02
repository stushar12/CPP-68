#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	int data; 
	Node* left;
	Node* right;
};

Node* GetNewNode(int data) 
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* Insert(Node* root,int data) 
{
	if(root == NULL)                                      // empty tree
    {                                           
		root = GetNewNode(data);
	}
	
	else if(data <= root->data)                         // if data to be inserted is lesser, insert in left subtree. 
    {
		root->left = Insert(root->left,data);
	}
	
	else                                                // else, insert in right subtree. 
    {
		root->right = Insert(root->right,data);
	}
	return root;
}

void distance_k_from_root(Node* root,int k)
{
	if(root==NULL)
	return; 
	else
	{
	if(k==0)
	{
		cout<<root->data<<" ";
		return;
	}
	else
	{
		distance_k_from_root(root->left,k-1);
		distance_k_from_root(root->right,k-1);
	}

	}
}



int main() 
{
	Node* root = NULL;  // Creating an empty tree

	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

	int distance_from_root=2;

	distance_k_from_root(root,distance_from_root);
}
