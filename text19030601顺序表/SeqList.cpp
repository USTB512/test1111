#include "SeqList.h"
#include<iostream>
#include <typeinfo>
#include <assert.h>
#include <stdexcept>
using namespace std;

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
		(*Visit)(elems[i]);
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
bool SeqList<ElemType>::GetElem(int i, ElemType &e) const
{
	if (i<1 || i>length)
		return false;
	else {
		e = elems[i - 1];
		return true;
	}
}

template<class ElemType>
bool SeqList<ElemType>::SetElem(int i, const ElemType &e)
{
	if (i<1 || i>length)
		return false;
	else
	{
		elems[i - 1] = e;
		return true;
	}
}

template<class ElemType>
bool SeqList<ElemType>::DeleteElem(int i, ElemType &e)
{
	if (i<1 || i>length)
		return false;
	else
	{
		e = elems[i - 1];
		for (int j = i; j < length; j++)
			elems[j - 1] = elems[j];
		length--;
		return true;
	}
}

template<class ElemType>
bool SeqList<ElemType>::InsertElem(int i, const ElemType &e)
{
	if (length = maxLength)
		return false;
	else if (i<1 || i>length + 1)
		return false;
	else {
		for (int j = length; j >= i; j++)
			elems[j] = elems[j - 1];
		elems[i - 1] = e;
		length++;
		return true;
	}
}

template<class ElemType>
bool SeqList<ElemType>::InsertElem(const ElemType &e)
{
	if (length == maxLength)
		return false;
	else 
	{
		elems[length] = e;
	length++;
	return true;

	}
}