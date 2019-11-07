#ifndef BST_H
#define BST_H
using namespace std;

struct bstNode
{
	int data;
	bstNode* left;
	bstNode* right;
};
enum traversal { PREORDER, INORDER, POSTORDER };
class bst
{
private:
	
	bstNode* insert(bstNode* root, int data);
	void preorder(bstNode* root);
	void inorder(bstNode* root);
	void postorder(bstNode* root);
	
	bstNode* getnewnode(int data);
	bstNode* root;
	int cnt(bstNode* root);
	int height(bstNode* root);
	bstNode* deleted(bstNode* root, int data);
	bstNode* getminnode(bstNode* root);
	bstNode* insuccess(bstNode* root, int data);
	bstNode* search(bstNode* root, int data);
public:
	
	bst();
	void insert(int data);
	bool isempty();
	void deleted(int data);
	bool search(int data);
	int insuccess(int data);
	void print(int flag);
	void insertlst(int lst[], int lenth);
	int getmin();
	int getmax();
	int getnum();
	int height();
};
#endif
