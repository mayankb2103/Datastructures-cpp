#include<iostream>
#include "dll.h"
int main()
{
	dll test;
	test.printlist();
	
	cout << "is empty " << test.isempty() << endl;
	test.insert(5);
	cout << "is empty " << test.isempty() << endl;
	test.printlist();
	test.insert(15);
	test.printlist();
	cout << test.length << endl;	

	for(int i=0;i<4;i++)
	{
		test.insert(i*2);
		test.insert(i*-3);
	}
	test.printlist();
	cout << test.length << endl;
	test.insertn(3,33);
	
	test.printlist();
	test.insertn(7,77);
	
	test.insertn(8,88);
	for(int i=3;i<19;i=i+3)
	{
		test.insertn(i,11*i);
	}
	test.printlist();
	test.insertn(19,99);
	test.printlist();
	test.insertn(1,0);
	test.printlist();
	
	cout << test.length << endl;
	test.insertn(22,100);
	test.printlist();

	
}
