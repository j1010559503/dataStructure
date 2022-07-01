#pragma once
#ifndef LINKLIST_H
#define LINKLIST_H

#include "LinkListNode.h"
#include <iostream>

template<class T>
class LinkList
{	
private:
	LinkListNode<T>* head;
public:
	int ListLength;		//�����ȱ���
	LinkList();
	bool insertNode(T);
	void printLinklist();
	int length();
	LinkListNode<T>* getHead () const;  //���������캯��ʹ�ã����Լ�const�ؼ���
	bool reverse();
	bool deleteNode(T);
	bool deleteNode(int, int);
	LinkList(const LinkList&);  //��д�������캯����Ϊ���
	~LinkList();
};

#endif // 
