#include "LinkListNode.h"

template<typename T>
LinkListNode<T>::LinkListNode() :elem(0), next(nullptr)
{

}

template<typename T>
LinkListNode<T>::LinkListNode(T elem)
{
	next = nullptr;
	this->elem = elem;
}

template<typename T>
LinkListNode<T>* LinkListNode<T>::getNext() const
{
	return next;
}

template<typename T>
bool LinkListNode<T>::setNext(LinkListNode<T>* tmp)
{
	next = tmp;
	return true;
}

template<typename T>
T LinkListNode<T>::getElem() const
{
	return elem;
}

template<typename T>
bool LinkListNode<T>::setElem(T temp)
{
	if (elem != nullptr)
	{
		elem = temp;
		return true;
	}
	return false;
}

template<class T>
LinkListNode<T>::~LinkListNode()
{
	delete next;
}

