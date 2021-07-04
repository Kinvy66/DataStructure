#include <iostream>
using namespace std;

//������
template<class T>
class list
{
public:
	list();
	list(std::initializer_list<T> _item);
	list(const list<T>& _list);
	list& operator=(const list<T>& _list);
	~list();

	int size();							//�б�Ԫ�ظ���
	bool is_empty();					//�Ƿ�Ϊ�ձ�
	T at(int _index);					//���ض�Ӧ������Ԫ�أ�����Խ�籨��
	void push(T _item);					//���б��������һ��Ԫ��
	void insert(int _index, T _item);	//��ָ��λ�ò���һ��Ԫ��
	void prepend(T _item);				//���б�ͷ������һ��Ԫ��
	T pop();							//ɾ�����һ��Ԫ�أ�������Ԫ��ֵ
	int del(int _index);				//ɾ��ָ������λ�õ�ֵ
	int rmove(T _item);					//ɾ��ָ����Ԫ�أ�
	int find(T _item);					//����ָ��Ԫ�أ����ص�һ�����ֵ�Ԫ�ص�������Ϊ�ҵ�����-1
	void clear();						//����ɾ��
	void printList();					//��ӡ

private:
	typedef struct Node
	{
		T data;
		struct Node* next;
	} Node;
	Node* linkedList = new Node();
	//ͷβָ��
	Node* star = linkedList;
	Node* end = linkedList;
	Node& findLink(int _index);			//����ĳ��λ�õ�Ԫ�أ�����һ���ڵ�
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
	
	//ͷ�巨
	/*
	for (auto it = _item.begin(); it != _item.end(); ++it) {
		Node* temp = new Node();
		temp->data = *it;
		temp->next = linkedList->next;
		linkedList->next = temp;
	}
	*/

	//β�巨
	Node* p = linkedList; //βָ��
	for (auto it = _item.begin(); it != _item.end(); ++it) {
		Node* temp = new Node();
		temp->data = *it;
		p->next = temp;
		p = temp;		//����βָ��ָ��
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
	// TODO: �ڴ˴����� return ���
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
	Node* temp = linkedList->next;	//ָ���һ�ڵ�
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
	temp->data = _item;		//����
	temp->next = nullptr;	//ָ��
	end->next = temp;		//ԭ����βָ��ָ������Ԫ��
	end = temp;				//����βָ��	
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

	Node* p = linkedList;	//�ƶ�ָ��	
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



