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
	int ListLength;		//链表长度变量
	LinkList();
	bool insertNode(T);
	void printLinklist();
	int length();
	LinkListNode<T>* getHead () const;  //供拷贝构造函数使用，所以加const关键字
	bool reverse();
	bool deleteNode(T);
	bool deleteNode(int, int);
	LinkList(const LinkList&);  //重写拷贝构造函数，为深拷贝
	~LinkList();
};

#endif // 
