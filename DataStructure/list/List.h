#pragma once

template<class T>
class List
{
public:
	/**
	* �������Ԫ��
	*
	* @return
	*/
	virtual void clear() = 0;

	/**
	 * Ԫ�ص�����
	 *
	 * @return
	 */
	virtual int size() = 0;

	/**
	 * �Ƿ�Ϊ��
	 *
	 * @return
	 */
	virtual bool isEmpty() = 0;

	/**
	 * �Ƿ����ĳ��Ԫ��
	 *
	 * @param element
	 * @return
	 */
	virtual bool contains(T element) = 0;

	/**
	 * ���Ԫ��
	 *
	 * @param element
	 */
	virtual void add(T element) = 0;

	/**
	 * ָ��λ�����Ԫ��
	 *
	 * @param index
	 * @param element
	 */
	 virtual void add(int index, T element) = 0;

	/**
	 * ��ȡindexλ�õ�Ԫ��
	 *
	 * @param index
	 * @return
	 */
	virtual T get(int index) = 0;

	/**
	 * ����indexλ�õ�Ԫ��
	 *
	 * @param index
	 * @param element
	 * @return ԭ����Ԫ��
	 */
	virtual T set(int index, T element) = 0;

	/**
	 * ɾ��indexλ�õ�Ԫ��
	 *
	 * @param index
	 * @return
	 */
	virtual T remove(int index) = 0;

	/**
	 * �鿴Ԫ�ص�����
	 *
	 * @param element
	 * @return
	 */
	virtual int indexOf(T element) = 0;
public:
	constexpr int ELEMENT_NOT_FOUND = -1;


};
