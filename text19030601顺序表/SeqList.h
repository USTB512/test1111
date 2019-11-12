#pragma once
//typedef int Status;
const int DEFAULT_SIZE = 100;
#include<crtdefs.h>
template<class ElemType>
class SeqList
{
protected:
	int length;
	int maxLength;
	ElemType *elems;
public:
	SeqList(int size =DEFAULT_SIZE);
	SeqList(ElemType v[], int n, int size = DEFAULT_SIZE);
	virtual ~SeqList();
	int GetLength()const;
	bool IsEmpty()const;//是否为空
	void Clear();
	void Traverse(void(*Visit)(const ElemType &))const;//遍历
	int LocateElem(const ElemType &e);//元素定位
	bool GetElem(int i, ElemType &e) const;//获得低i个值
	bool SetElem(int i, const ElemType &e);//修改低i个值
	bool DeleteElem(int i, ElemType &e);//删除
	bool InsertElem(int i, const ElemType &e);//插入
	bool InsertElem(const ElemType &e);
	SeqList(const SeqList<ElemType> &sa);//复制
	SeqList<ElemType>&operator=(const SeqList<ElemType>&sa);//重载
};
/*
template <class ElemType>
SeqList<ElemType>::SeqList(int size)
{
	elems = new ElemType[size];
	assert(elems);
	maxLength = size;
	length = 0;
}

template<class ElemType>
SeqList<ElemType>::SeqList(ElemType v[], int n, int size)
{
	elems = new ElemType[size];
	assert(elems);
	maxLength = size;
	//length = size;
	length = n;
	for (int i = 0; i < length; i++)
		elems[i] = v[i];
}

template<class ElemType>
SeqList<ElemType>::~SeqList()
{
	delete[]elems;
}

template<class ElemType>
void SeqList<ElemType>::Clear()
{
	length = 0;
}

template<class ElemType>
void SeqList<ElemType>::Traverse(void(*Visit)(const ElemType &))const
{
	for (int i = 0; i < length; i++)
		(*visit)(elems[i]);
}

template<class ElemType>
int SeqList<ElemType>::LocateElem(const ElemType &e)
{
	int i = 0;
	while (i < length&&elems[i] != e);
	i++;
	return i < length ? i + 1 : 0;
}

template<class ElemType>
Status SeqList<ElemType>::GetElem(int i, ElemType &e) const
{
	if (i<1 || i>length)
		return NOT_PRESENT;
	else {
		e = elems[i - 1];
		return ENTRY_FOUND;
	}
}

template<class ElemType>
Status SeqList<ElemType>::SetElem(int i, const ElemType &e)
{
	if (i<1 || i>length)
		return RANGE_ERROR;
	eles{
		elems[i - 1] = e;
	return SUCCESS;
	}
}

template<class ElemType>
Status SeqList<ElemType>::DeleteElem(int i, ElemType &e)
{
	if (i<1 || i>length)
		return RANGE_ERROR;
	else
	{
		e = elems[i - 1];
		for (int j = i; j < length; j++)
			elems[j - 1] = elems[j];
		length--;
		return SUCCESS;
	}
}

template<class ElemType>
Status SeqList<ElemType>::InsertElem(int i, const ElemType &e)
{
	if (length = maxLength)
		return OVER_FLOW;
	else if (i<1 || i>length + 1)
		return RANGE_ERROR;
	else {
		for (int j = length; j >= i; j++)
			elems[j] = elems[j - 1];
		elems[i - 1] = e;
		length++;
		return SUCCESS;
	}
}

template<class ElemType>
Status SeqList<ElemType>::InsertElem(const ElemType &e)
{
	if (length == maxLength)
		return OVER_FLOW;
	eles{
		elems[length] = e;
	length++;
	return SUCCESS;

	}
}
*/