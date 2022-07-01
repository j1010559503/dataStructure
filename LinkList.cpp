#include "LinkList.h"

template<typename T>
LinkList<T>::LinkList():ListLength(0)
{
	head = new LinkListNode<T>();
}

template<typename T>
bool LinkList<T>::insertNode(T elem) //ͷ�巨
{
	LinkListNode<T>* curr = new LinkListNode<T>(elem);
	curr->setNext(head->getNext());
	head->setNext(curr);
	curr = nullptr;
	return true;
}

template<typename T>
void LinkList<T>::printLinklist()
{
	if (head->getNext() == nullptr)
	{
		std::cout << "EMPTY!" << std::endl;
		return;
	}
	LinkListNode<T>* temp = head->getNext();
	while (temp)
	{
		if (temp == head->getNext())
		{
			std::cout << temp->getElem();
		}else{
			std::cout << "->" << temp->getElem();
		}
		temp = temp->getNext();
	}
	std::cout << std::endl;
}

template<class T>
LinkListNode<T>* LinkList<T>::getHead() const
{
	return head;
}

template<typename T>
int LinkList<T>::length()
{
	ListLength = 0;
	LinkListNode<T>* p = head->getNext();
 	while (p != nullptr)
 	{
		p = p->getNext();
		++ListLength;
 	}
	return ListLength;
}

template<class T>
bool LinkList<T>::reverse()
{
	LinkListNode<T>* pre = nullptr,* curr = head->getNext(),* rear = curr->getNext();
	curr->setNext(nullptr);
	while (rear != nullptr)
	{
		pre = curr;
		curr = rear;
		rear = rear->getNext();
		curr->setNext(pre);
	}
	head->setNext(curr);
	pre = nullptr;
	curr = nullptr;
	return true;
}

template<class T>
bool LinkList<T>::deleteNode(T elem)
{
	LinkListNode<T>* pre = head, * curr = head->getNext(),*q = nullptr;
	bool flag = false;  //ɾ����־��Ĭ��Ϊfalse
	while (curr)
	{
		if (curr->getElem() == elem)
		{
			q = curr;
			curr = curr->getNext();
			pre->setNext(curr);
			free(q);
			flag = true;  //����ҵ���ɾ����flag��Ϊtrue
		}
		else {  //�����Ͼͼ���������
			pre = curr;
			curr = curr->getNext();
		}
	}
	pre = nullptr;
	q = nullptr;
	if (flag)
	{
		std::cout << "ɾ���ɹ���" << std::endl;
		return true;
	}
	else {
		std::cout << "δ�ҵ�Ԫ�أ�ɾ��ʧ�ܣ�" << std::endl;
		return false;
	}
}

template<class T>
bool LinkList<T>::deleteNode(int arg1, int arg2)
{
	LinkListNode<T>* pre = head, * curr = head->getNext(),*q = nullptr;
	int tmp = 0;
	if (arg1 > this->length() || arg1 <= 0)
	{
		std::cout << "����Խ�磬ɾ��ʧ�ܣ�" << std::endl;
		return false;
	}
	for (int i = 1; i < arg1; ++i)
	{
		pre = pre->getNext();
		curr = curr->getNext();
	}
	q = curr;
	tmp = q->getElem();
	curr = curr->getNext();
	pre->setNext(curr);
	free(q);
	q = nullptr;
	curr = nullptr;
	tmp = 0;
	pre = nullptr;
	std::cout << "ɾ���ɹ���ɾ����" << arg1 << "λԪ�أ�" << "ֵΪ" << tmp << std::endl;
	return true;
}

template<class T>
LinkList<T>::LinkList(const LinkList& cop)
{
	head = new LinkListNode<T>();
	if (cop.getHead()->getNext())  //�����������Ϊ�գ��������
	{
		LinkListNode<T>* curr = cop.getHead()->getNext();  //����ָ��ָ�򿽱�����ĵ�һ���ڵ�
		while (curr)
		{
			this->insertNode(curr->getElem());  //ͷ�巨���룬�����Ƿ���
			curr = curr->getNext();
		}
		this->reverse();   //��Ҫ��תһ������
	}else{  //�������������Ϊ�գ�������Ҳ�ÿ�
		head->setNext(nullptr);
	}
}

template<class T>
LinkList<T>::~LinkList()
{
	delete head;
}


