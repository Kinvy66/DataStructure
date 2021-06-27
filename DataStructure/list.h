#include <iostream>

//单链表


template<class T>
class list
{
public:
	list();
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
	void del(int _index);				//删除指定索引位置的值
	int rmove(T _item);					//删除指定的元素，
	int find(T _item);					//查找指定元素，返回第一个出现的元素的索引，为找到返回-1
	void clear();						//整表删除

private:
	struct Node
	{
		T data;
		struct Node* next;
	};
};

template <class T>
list<T>::list()
{

}

template <class T>
list<T>::list(const list<T>& _list)
{

}

template<class T>
inline list<T>& 
list<T>::operator =(const list<T>& _list)
{
	// TODO: 在此处插入 return 语句
}

template<class T>
inline list<T>::~list()
{
}

template<class T>
inline int list<T>::size()
{
	return 0;
}

