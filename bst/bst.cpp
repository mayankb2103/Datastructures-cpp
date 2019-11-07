#include<iostream>
#include "bst.h"
using namespace std;
bst::bst()
{
	root = NULL;
}



void bst::insert(int data)
{
	root = bst::insert(root, data);
}

void bst::print(int flag)
{
	if (flag == PREORDER)
	{
		cout << "Preorder: ";
		bst::preorder(bst::root);
		cout << endl;
	}
	else if (flag == INORDER)
	{
		cout << "Inorder: ";
		bst::inorder(bst::root);
		cout << endl;
	}
	else //flag==POSTORDER
	{
		cout << "Postorder: ";
		bst::postorder(bst::root);
		cout << endl;
	}
}
void bst::insertlst(int lst[], int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		this->insert(lst[i]);
	}

}

bool bst::search(int data)
{
	bstNode* eval = search(root, data);
	if (eval != NULL)
		return true;
	else
		return false;
}

bool bst::isempty()
{
	return root == NULL;
}

int bst::getmin()
{
	bstNode* current = root;
	while (current->left!=NULL)
	{
		current = current->left;
	}
	cout << "Minimum is " << current->data << endl;
	return current->data;
}

int bst::getmax()
{
	bstNode* current = root;
	while (current->right != NULL)
	{
		current = current->right;
	}
	cout << "Maximum is " << current->data << endl;
	return current->data;
}

int bst::getnum()
{
	int count = 0;

	count=cnt(root);
	cout << "Size is " << count << endl;
	return count;
}

int bst::height()
{
	int count = 0;

	count = height(root);
	cout << "Height is " << count << endl;
	return count;
}

void bst::deleted(int data)
{
	root=deleted(root, data);
}

int bst::insuccess(int data)
{
	bstNode* temp = insuccess(root, data);
	cout << "Inorder successor of " << data << " is " << temp->data << endl;
	return temp->data;
}
