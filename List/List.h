#include <iostream>

template<class T>
class List
{
public:
	List();
	List(const List& _list);
	List& operator=(const List& _list);
	~List();

	int size();							//�б�Ԫ�ظ���
	int capatity();						//�б�����
	bool is_empty();					//�Ƿ�Ϊ�ձ�
	T at(int _index);					//���ض�Ӧ������Ԫ�أ�����Խ�籨��
	void push(T _item);					//���б��������һ��Ԫ��
	void insert(int _index, T _item);		//��ָ��λ�ò���һ��Ԫ��
	void prepend(T _item);				//���б�ͷ������һ��Ԫ��
	T pop();							//ɾ�����һ��Ԫ�أ�������Ԫ��ֵ
	void delete(int _index);				//ɾ��ָ������λ�õ�ֵ������Ԫ������ǰ��
	int rmove(T _item);					//ɾ��ָ����Ԫ�أ����Ż��������ж��Ԫ�ط��ص�һ������
	int find(T _item);					//����ָ��Ԫ�أ����ص�һ�����ֵ�Ԫ�ص�������Ϊ�ҵ�����-1
private:
	void resize(int _new_capacity)		//�ı��б�������������������������е�һ������ȡԪ�غ�Ԫ������ֻ��������1/4,���Сһ��

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

