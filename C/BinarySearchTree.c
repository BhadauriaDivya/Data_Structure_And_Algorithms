#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int key;
	struct node *left, *right;
}new;

new* newNode(int item)
{
	new* nn= (new*)malloc(sizeof(new));
	nn->key = item;
	nn->left = nn->right = NULL;
	return nn;
}

void inorder(new* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}

void preorder(new* root)
{
	if (root != NULL) {
		printf("%d ", root->key);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(new* root)
{
	if (root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->key);
	}
}

new* insert(new* node, int key)
{
	if (node == NULL)
		return newNode(key);
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	return node;
}

int main()
{
	new* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	return 0;
}