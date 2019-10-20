#include<iostream>
#include "list.h"
using namespace std;
int main()
{
	abslist A(33);
	for(int i=0;i<12;i++)
	{
		A.insert(i*i);
	}	
	A.printlist();

	cout<<	A.size() << endl;
	A.insert(22222, 3);
	cout<<	A.size() << endl;
	A.printlist();
	A.remove(4);
		cout<<	A.size() << endl;
	A.printlist();
	cout << A.get(7) << endl;
	for(int i=0;i<47;i++)
	{
		A.insert(i*i);
	}
A.printlist();

	cout<<	A.size() << endl;
	A.printlist();
	cout << "isfull" << A.isfull() << endl;
	A.remove(4);

	cout << "isfull " << A.isfull() << endl;
		cout<<	A.size() << endl;
	A.printlist();
	cout << A.get(23) << endl;
	
	A.insert(24456572, 13);
	
	A.printlist();
	cout << A.get(23) << endl;
	cout<<	A.size() << endl;
	A.printlist();
	A.insert(24456572, 13);
	
	A.printlist();
	cout << A.get(23) << endl;
	cout<<	A.size() << endl;
	A.printlist();
cout << A.isfull() << endl;


return 0;
}
