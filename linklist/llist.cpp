#include<iostream>
#include "llist.h"
using namespace std;




		llist::llist()
		{
			head=NULL;
			end=NULL;
			length=0;
		}
	
		int llist::size()
		{
			return length;
		}
		void llist::insertbegin(int data)
		{
			
			Node* temp=new Node(data);
			
			temp->next=head;			
			if(length==0)
			{
				end=temp;
			}
			head=temp;
			length++;
		}
		void llist::insertend(int data)
		{
			Node* temp=new Node(data);
			end->next=temp;
			end=temp;
			length++;

		}
		void llist::insertn(int n, int data)
		{
			Node* temp=new Node(data);
			if(n==1)
			{
				temp->next=head;
				head=temp;
			}

			else if(n==length+1)
			{
				end->next=temp;
				end=temp;
			}

			else
			{
				Node* temphead= head;
				for(int i=1;i<n-1;i++)
				{
					temphead=temphead->next;
				}
		
				temp->next = temphead->next;
				temphead->next=temp;
			}
			length++;
			
		}
		void llist::deleten(int n)
		{
			Node* temphead=head;

			if(length==1)
			{
				head=temphead->next;
				delete temphead;
				
			}
			else{
			for(int i=1;i<n-1;i++)
			{
				temphead=temphead->next;
			}
			Node* del=temphead->next;
			temphead->next=del->next;
			delete del;
			}
			length--;
			
		}
		bool llist::isempty()
		{return length==0;}
		void llist::printlist()
		{
			Node* temp=head;
			while(temp!=NULL)
			{
				cout << temp->data << " ";
				temp=temp->next;
			}
			cout << endl;
		}

		void llist::revprint(Node* hed)
		{

			if(hed!=NULL)
			{
				revprint(hed->next);
				
				cout <<  hed->data << " ";

			}			
			return;


			
		}

		void llist::reverselist()
		{

			Node* temphead=head;
			Node* nxt;
			Node* prev=NULL;
			Node* curr=head;
			while(curr!=NULL)
			{
				nxt=curr->next;
				curr->next=prev;
				prev=curr;
				curr=nxt;
			}
			head=prev;
			end=temphead;

		}
		void llist::reverserec(Node* hed)
		{
			if(hed->next==NULL)
			{
				head=hed;
				return;
			}
			reverserec(hed->next);
			Node* temp=hed->next;
			temp->next=hed;
			hed->next=NULL;

		}

