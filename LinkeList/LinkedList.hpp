#include <iostream>


using namespace std;

template <class T>
class LinkedList
{
public:
	LinkedList();
	LinkedList(size_t _Count, T _Value);
	LinkedList(const LinkedList& _List);
	~LinkedList();

	bool empty();
	void clear();
	size_t size();
	bool getElem(size_t _Pos, T _Value);
	void insert(size_t _Pos, T _Value);
	void delet(size_t _Pos, T _Value);


private:
	typedef struct Node {
		T data;
		struct Node* next;
	};Node

};

template <class T>
LinkedList<T>::LinkedList()
{
	
}

template <class T>
LinkedList<T>::LinkedList(size_t _Count, T _Value)
{

}

template <class T>
LinkedList<T>::LinkedList(const LinkedList& _List)
{

}

template <class T>
LinkedList<T>::~LinkedList()
{

}


bool empty()
{

}