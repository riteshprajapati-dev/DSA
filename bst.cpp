//Implementation of binary search tree.
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node * left;
	node * right;
};
node * create(int data){
	node * newnode=(node *) malloc(sizeof(node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
node * insert(node * root,int value){
	if(root==NULL){
		return create(value);
	}
	if(value<root->data){
		root->left=insert(root->left,value);
	}
	if(value>root->data){
		root->right=insert(root->right,value);
	}
	return root;
}
void preorder(node * root){
	if(root!=NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node * root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
		
	}
}
void postorder(node * root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}
main(){
	node * root=NULL;
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,15);
	root=insert(root,3);
	root=insert(root,7);
	printf("Preorder traversal\n");
	preorder(root);
	printf("\nInorder traversal\n");
	inorder(root);
	printf("\nPostorder traversal\n");
	postorder(root);
}
