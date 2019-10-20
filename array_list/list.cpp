#include<stdio.h>
#include<iostream>
#include "list.h"
using namespace std;
		abslist::abslist(int x)
		{
			A= new int [x];
			MAXSIZE=x;
			end=-1;
		}
		int abslist::size()
		{
			return end+1;
		}
		int abslist::insert(int elem)
		{
			if(this->isfull())
			{
				return 0;
			}
			A[++end]=elem;
			return 1;
		}
		int abslist::insert(int elem, int pos)
		{
			if(this->isfull())
			{return 0;
			}
			for(int i=end;i>=pos;i--)
			{
				A[i+1]=A[i];
				
			}
			A[pos]=elem;
			end++;
			return 1;
		}
		void abslist::remove(int pos)
		{
			for(int i=pos;i<end;i++)
			{
				A[i]=A[i+1];
			}
			end--;
		}
		bool abslist::isempty()
		{
			return end==-1;
		}
		bool abslist::isfull()
		{
			return end+1>=MAXSIZE;
		}
		int abslist::get(int pos)
		{
			return A[pos];
		}
		void abslist::printlist()
		{
			for(int i=0;i<=end;i++)
			{
				cout << A[i] << " ";
			}
			cout << endl;
		}








