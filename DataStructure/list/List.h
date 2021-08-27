#pragma once

template<class T>
class List
{
public:
	/**
	* 清除所有元素
	*
	* @return
	*/
	virtual void clear() = 0;

	/**
	 * 元素的数量
	 *
	 * @return
	 */
	virtual int size() = 0;

	/**
	 * 是否为空
	 *
	 * @return
	 */
	virtual bool isEmpty() = 0;

	/**
	 * 是否包含某个元素
	 *
	 * @param element
	 * @return
	 */
	virtual bool contains(T element) = 0;

	/**
	 * 添加元素
	 *
	 * @param element
	 */
	virtual void add(T element) = 0;

	/**
	 * 指定位置添加元素
	 *
	 * @param index
	 * @param element
	 */
	 virtual void add(int index, T element) = 0;

	/**
	 * 获取index位置的元素
	 *
	 * @param index
	 * @return
	 */
	virtual T get(int index) = 0;

	/**
	 * 设置index位置的元素
	 *
	 * @param index
	 * @param element
	 * @return 原来的元素
	 */
	virtual T set(int index, T element) = 0;

	/**
	 * 删除index位置的元素
	 *
	 * @param index
	 * @return
	 */
	virtual T remove(int index) = 0;

	/**
	 * 查看元素的索引
	 *
	 * @param element
	 * @return
	 */
	virtual int indexOf(T element) = 0;
public:
	constexpr int ELEMENT_NOT_FOUND = -1;


};
