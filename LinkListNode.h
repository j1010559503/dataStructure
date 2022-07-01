#pragma once
#ifndef LINKLISTNODE_H
#define LINKLISTNODE_H

template<class T>
class LinkListNode
{
private:
	LinkListNode* next;
	T elem;
public:
	LinkListNode();
	LinkListNode(T);
	LinkListNode<T>* getNext() const;
	bool setNext(LinkListNode<T>*);
	T getElem() const;
	bool setElem(T);
	~LinkListNode();
};

#endif 

