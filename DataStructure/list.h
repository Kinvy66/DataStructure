#include <iostream>

//������


template<class T>
class list
{
public:
	list();
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
	void del(int _index);				//ɾ��ָ������λ�õ�ֵ
	int rmove(T _item);					//ɾ��ָ����Ԫ�أ�
	int find(T _item);					//����ָ��Ԫ�أ����ص�һ�����ֵ�Ԫ�ص�������Ϊ�ҵ�����-1
	void clear();						//����ɾ��

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
	// TODO: �ڴ˴����� return ���
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

