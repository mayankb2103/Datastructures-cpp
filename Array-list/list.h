#ifndef LIST_H
#define LIST_H
class abslist
{
	private:
		int MAXSIZE;
		int end;
		int* A;
	public:
		abslist(int x);
		int size();
		int insert(int elem);
		int insert(int elem, int pos);
		bool isempty();
		bool isfull();
		void remove(int pos);
		int get(int pos);
		void printlist();
};
#endif
