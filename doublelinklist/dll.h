#ifndef DLL_H
#define DLL_H
using namespace std;
struct Node
{
	int data;
	Node* prev;
	Node* next;
	Node(int value)
	{
		this->data=value;
		this->prev=NULL;
		this->next=NULL;
	}

};

class dll
{
	public:
		Node* head;
		Node* tail;
		int length;
		dll();
		bool isempty();
		void insert(int data);
		void insertn(int n, int data);
		void deleten(int n);
		void reverselist(Node* head);
		void reverseprint(Node* head);
		void printlist();

};
#endif
