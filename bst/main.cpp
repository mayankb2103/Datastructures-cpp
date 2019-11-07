#include "bst.h"
#include <iostream>

int main()
{
	
	bst tree = bst();

	int lst[6] = {50, 30, 20, 40, 70, 60 };
	tree.insertlst(lst,6);
	tree.getnum();
	tree.height();
	tree.insert(12);
	tree.getmin();
	tree.height();
	tree.insert(10);
	tree.getmax();
	tree.height();
	tree.insert(14);
	tree.getnum();
	tree.height();
	tree.print(PREORDER);
	tree.print(INORDER);
	tree.print(POSTORDER);
	tree.deleted(10);
	tree.print(INORDER);
	tree.deleted(30);
	tree.print(INORDER);
	tree.deleted(50);
	tree.print(INORDER);
	tree.insuccess(12);
	std::cin.get();
	

}

