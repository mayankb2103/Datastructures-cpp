#include<iostream>
#include "bst.h"
bstNode* bst::getnewnode(int data)
{
	bstNode* temp = new bstNode();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

bstNode* bst::insert(bstNode* root, int data)
{
	if (root == NULL)
	{
		root = bst::getnewnode(data);
	}
	else if (root->data > data)
	{
		root->left = insert(root->left, data);
	}
	else
	{
		root->right = insert(root->right, data);
	}
	return root;
}
void bst::preorder(bstNode* root)
{
	if (root != NULL)
	{
		cout << root->data << " ";
		bst::preorder(root->left);


		bst::preorder(root->right);

	}
}
void bst::inorder(bstNode* root)
{
	if (root != NULL)
	{

		bst::inorder(root->left);
		cout << root->data << " ";

		bst::inorder(root->right);

	}
}

void bst::postorder(bstNode* root)
{
	if (root != NULL)
	{

		bst::postorder(root->left);
		bst::postorder(root->right);
		cout << root->data << " ";

	}
}
int bst::cnt(bstNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + cnt(root->left) + cnt(root->right);
	}
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}
int bst::height(bstNode* root)
{
	if (root == NULL)
	{
		return -1;
	}
	else
	{
		return 1 + max(height(root->left) , height(root->right));
	}
}

bstNode* bst::search(bstNode* root, int data)
{
	if (root == NULL) return NULL;
	else if (root->data == data) return root;
	else if (root->data > data) return search(root->left, data);
	else return search(root->right, data);
}


bstNode* bst::deleted(bstNode* root, int data)
{
	if (root == NULL) return root;
	else if (root->data > data)	root->left = deleted(root->left, data);
	else if (root->data < data) root->right= deleted(root->right, data);
	else
	{
		if (root->left == NULL && root->right == NULL)
		{
			delete root;
			root = NULL;
			return root;

			
		}
		else if (root->left == NULL)
		{
			bstNode* temp = root->right;
			
			delete root;
			return temp;

			
		}
		else if (root->right == NULL)
		{
			bstNode* temp = root->left;
			delete root;
			return temp;

			
		}
		else
		{

			bstNode* current = getminnode(root->right);
			root->data = current->data;
			root->right = deleted(root->right, current->data);
		}
	}
	return root;


}

bstNode* bst::insuccess(bstNode* root, int data)
{
	
	bstNode* current = search(root, data);
	if (current== NULL) return NULL;
	
	if (current->right != NULL)
	{
		return bst::getminnode(current->right);
	}
	else
	{

		bstNode* ancestor = root;
		bstNode* successor= NULL;
		while (ancestor != current)
		{
			if (ancestor->data > current->data)
			{
				successor = ancestor;
				ancestor = ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
		return successor;

	}



}
bstNode* bst::getminnode(bstNode* root)
{
	bstNode* current = root;
	while (current->left != NULL)
	{
		current = current->left;
	}
	return current;

}


