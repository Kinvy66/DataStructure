#include <iostream>

template<class T>
class List
{
public:
	List();
	List(const List& _list);
	List& operator=(const List& _list);
	~List();

	int size();							//列表元素个数
	int capatity();						//列表容量
	bool is_empty();					//是否为空表
	T at(int _index);					//返回对应索引的元素，索引越界报错
	void push(T _item);					//在列表的最后添加一个元素
	void insert(int _index, T _item);		//在指定位置插入一个元素
	void prepend(T _item);				//在列表头部增加一个元素
	T pop();							//删除最后一个元素，并返回元素值
	void delete(int _index);				//删除指定索引位置的值，后面元素依次前移
	int rmove(T _item);					//删除指定的元素，并放回索引，有多个元素返回第一的索引
	int find(T _item);					//查找指定元素，返回第一个出现的元素的索引，为找到返回-1
private:
	void resize(int _new_capacity)		//改变列表的容量，容量不够，增加现有的一倍，获取元素后，元素数量只有容量的1/4,则减小一半

private:
	T m_data[1];
};

template <class T>
List<T>::List()
{

}

template <class T>
List<T>::List(const List& _list)
{

}

