#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node (int dat)
	{
		this->data=dat;
		this->next=NULL;
	}
};
class llist
{

	private:
		Node* end;
		int length;
	public:
		Node* head;
		llist();	
		int size();
		void insertbegin(int data);
		void insertend(int data);
		void insertn(int n, int data);
		void deleten(int n);
		bool isempty();
		void printlist();
		void revprint(Node* head);
		void reverserec(Node* head);
		void reverselist();
};
