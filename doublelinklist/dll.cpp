#include<iostream>
#include "dll.h"

dll::dll()
{
	
	head=NULL;
	tail=NULL;
	length=0;
}


bool dll::isempty()
{
	return length==0;
}

void dll::insert(int data)
{
	Node* temp=new Node(data);
	if(length==0)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
	}
	length++;
}
void dll::insertn(int n, int data)
{
	if(n==1)
	{
		Node* temp=new Node(data);
		head->prev=temp;
		temp->next=head;
		head=temp;
	}
	else if(n>=length/2)
	{
		Node* temptail=tail;
		for(int i=length-n; i>=0;i--)
		{
			temptail=temptail->prev;
		}
		Node* temp=new Node(data);
		temp->prev=temptail;
		temp->next=temptail->next;
		if(n!=length+1)
		{
		temptail->next->prev=temp;
		}
		temptail->next=temp;
	}
	else
	{
		Node* temphead=head;
		for(int i=1;i<n;i++)
		{
			temphead=temphead->next;
		}
		Node* temp=new Node(data);
		temp->prev=temphead->prev;
		temp->next=temphead;
		
		temphead->prev->next=temp;
		temphead->prev=temp;
	}
	length++;
}
void dll::deleten(int n)
{
}
void dll::deletedata(int data)
{
}
void dll::reverselist(Node* head)
{
}
void dll::reverseprint(Node* head)
{
}
void dll::printlist()
{
	Node* temphead=head;
	while(temphead!=NULL)
	{
		cout << temphead->data << " ";
		temphead=temphead->next;
	}
	cout << endl;
}
                                                                                                                                                                     
                                                                                                                                                                     
                                  
