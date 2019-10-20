#include<iostream>
#include "llist.h"
int main()
{
	llist test;
	test.printlist();
	cout << "is empty " << test.isempty() << endl;
	test.insertbegin(5);
	test.insertend(10);
	for(int i=0;i<4;i++)
	{
		test.insertbegin(i*1);
		test.insertend(i*-1);
	}
	test.printlist();
	test.insertn(4,22);
	test.printlist();
	test.insertn(1,33);
	test.printlist();
	test.insertn(13,44);
	test.printlist();
	cout << "delete" << endl;
	test.deleten(10);
	test.printlist();
	test.deleten(1);
	test.printlist();
	test.deleten(4);
	test.printlist();
	test.insertn(4,55);
	test.insertbegin(22);
	test.printlist();
	test.reverselist();
	test.printlist();
	cout << "===================" << endl;
	llist trs2;
	trs2.printlist();
	trs2.reverselist();
	trs2.printlist();
	trs2.insertn(1,22);
	trs2.printlist();
	trs2.reverselist();
	trs2.printlist();
	trs2.insertend(33);
	trs2.printlist();
	trs2.reverselist();
	trs2.printlist();
	cout << "size is :" << trs2.size() << endl;
	test.insertend(4444);
	test.printlist();
	test.revprint(test.head);
	test.reverserec(test.head);
	cout << endl;
	test.printlist();
	
}
