#include <iostream>
#include "../DataStructure/list.hpp"
using namespace std;

template<class T>
class MyClass 
{
public:
	struct Node
	{
		T data;
	};

	Node fun();

private:
	Node node;
};


template<class T>
MyClass<T>::Node MyClass<T>::fun()
{
	// TODO: 在此处插入 return 语句
}





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

