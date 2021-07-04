#include <iostream>
#include "../DataStructure/list.hpp"
using namespace std;



void test01()
{
	list<int> ls({1,5,32});
	ls.printList();
	ls.del(2);
	ls.printList();
	list<int> l1;
	cout << l1.size() << endl;
}

int main()
{

	test01();
	
	system("pause");
	return 0;
}


