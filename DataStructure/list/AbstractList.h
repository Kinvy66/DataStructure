#pragma once

template<class T>
class AbstractList : public List<T>
{
public:
	void clear();
	int size();
	bool isEmpty();

protected:
	 void outOfBounds(int index) 
	 {
		throw new IndexOutOfBoundsException("Index" + index + ", Szie:" + size);

	 }

	 void rangeCheck(int index) 
	 {
		if (index < 0 || index >= size) {
			outOfBounds(index);
		}

	 }

	void rangeCheckForAdd(int index) 
	{
		if (index < 0 || index > size) {
			outOfBounds(index);
		}
	}

protected:
	int _size;
};

template <class T>
inline
int AbstractList<T>::size()
{
	return _size;
}

/**
 * �Ƿ�Ϊ��
 *
 * @return
 */
template <class T>
inline
bool  AbstractList<T>::isEmpty()
{
	return size == 0;
}

/**
 * �Ƿ����ĳ��Ԫ��
 *
 * @param element
 * @return
 */
bool contains(E element)
{

	return indexOf(element) != ELEMENT_NOT_FOUND;
}

/**
 * ���Ԫ��
 *
 * @param element
 */
void add(E element)
{
	add(size, element);
}