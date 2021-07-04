#include <iostream>
using namespace std;

//单链表
template<class T>
class list
{
public:
	list();
	list(std::initializer_list<T> _item);
	list(const list<T>& _list);
	list& operator=(const list<T>& _list);
	~list();

	int size();							//列表元素个数
	bool is_empty();					//是否为空表
	T at(int _index);					//返回对应索引的元素，索引越界报错
	void push(T _item);					//在列表的最后添加一个元素
	void insert(int _index, T _item);	//在指定位置插入一个元素
	void prepend(T _item);				//在列表头部增加一个元素
	T pop();							//删除最后一个元素，并返回元素值
	int del(int _index);				//删除指定索引位置的值
	int rmove(T _item);					//删除指定的元素，
	int find(T _item);					//查找指定元素，返回第一个出现的元素的索引，为找到返回-1
	void clear();						//整表删除
	void printList();					//打印

private:
	typedef struct Node
	{
		T data;
		struct Node* next;
	} Node;
	Node* linkedList = new Node();
	//头尾指针
	Node* star = linkedList;
	Node* end = linkedList;
	Node& findLink(int _index);			//查找某个位置的元素，返回一个节点
};

template <class T>
inline
list<T>::list()
{
	linkedList->next = nullptr;
}

template<class T>
inline list<T>::list(std::initializer_list<T> _item)
{
	linkedList->next = nullptr;
	
	//头插法
	/*
	for (auto it = _item.begin(); it != _item.end(); ++it) {
		Node* temp = new Node();
		temp->data = *it;
		temp->next = linkedList->next;
		linkedList->next = temp;
	}
	*/

	//尾插法
	Node* p = linkedList; //尾指针
	for (auto it = _item.begin(); it != _item.end(); ++it) {
		Node* temp = new Node();
		temp->data = *it;
		p->next = temp;
		p = temp;		//更新尾指针指向
	}
	end = p;
}

template <class T>
inline
list<T>::list(const list<T>& _list)
{
	
}

template<class T>
inline
list<T>& list<T>::operator =(const list<T>& _list)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

template<class T>
inline list<T>::~list()
{
	clear();
}

template<class T>
inline int list<T>::size()
{
	Node* temp = linkedList->next;	//指向第一节点
	int count = 0;
	while (temp != nullptr)
	{
		count++;
		temp = (*temp).next;
	}
	return count;
}

template<class T>
inline bool list<T>::is_empty()
{
	return this->size();
}

template<class T>
inline T list<T>::at(int _index)
{
	T data = 0;
	Node* p = linkedList;
	for (int i = 0; i < _index+1; ++i) {
		Node* temp = p->next;
		data = temp->data;
		p = temp;
	}
	return data;
}

template<class T>
inline void list<T>::push(T _item)
{
	Node* temp = new Node();
	temp->data = _item;		//数据
	temp->next = nullptr;	//指针
	end->next = temp;		//原链表尾指针指向新增元素
	end = temp;				//更新尾指针	
}

template<class T>
inline void list<T>::insert(int _index, T _item)
{
}

template<class T>
inline
void list<T>::prepend(T _item)
{
}

template<class T>
inline T list<T>::pop()
{
	return T();
}

template<class T>
inline int list<T>::del(int _index)
{
	if (_index > this->size())
		return -1;

	Node* p = linkedList;	//移动指针	
	for (int i = 0; i < _index; ++i) {
		Node* tmep = p;
		p = tmep->next;
	}
	Node* rm = p->next;
	p->next = rm->next;
	delete rm;
}

template<class T>
inline int list<T>::rmove(T _item)
{
	return 0;
}

template<class T>
inline int list<T>::find(T _item)
{
	return 0;
}

template<class T>
inline void list<T>::clear()
{
	for (int i = 0; i < this->size(); ++i) {

	}
}

template<class T>
inline void list<T>::printList()
{
	if (this->size() == 0)
		cout << "None" << endl;
	for (int i = 0; i < this->size(); ++i) {
		cout << at(i) << "\t";
	}
	cout << endl;
}



