#include "BinaryTree.h"

template<typename T>
BinaryTree<T>::BinaryTree(T elem)
{
	root = new BinaryNode<T>(elem);
}

template<typename T>
bool BinaryTree<T>::InsertNode(T elem)
{
	BinaryNode<T>* curr = root, * q = nullptr;
	while (curr)
	{
		q = curr;
		if (elem == curr->getElem()) {
			std::cout << "元素已存在，无法插入！" << std::endl;
			return false;
		}
		if (elem < curr->getElem())
		{
			curr = curr->getLchild();
			if (!curr)
			{
				BinaryNode<T>* new_Node = new BinaryNode<T>(elem);
				q->setLchild(new_Node);
				std::cout << "插入成功" << std::endl;
				return true;
			}
		}
		else
		{
			curr = curr->getRchild();
			if (!curr) {
				BinaryNode<T>* new_Node = new BinaryNode<T>(elem);
				q->setRchild(new_Node);
				std::cout << "插入成功" << std::endl;
				return true;
			}
		}
	}
	return true;
}

template<typename T>
void BinaryTree<T>::preOrder()
{
	std::stack<BinaryNode<T>*> s;
	BinaryNode<T>* curr = root;
	std::cout << "先序遍历：";
	while ( curr || !(s.empty()) )
	{
		if (curr) {
			std::cout << curr->getElem() << " ";
			s.push(curr);
			curr = curr->getLchild();
		}
		else
		{
			curr = s.top();
			s.pop();
			curr = curr->getRchild();
		}
	}
	std::cout << std::endl;
}

template<typename T>
void BinaryTree<T>::inOrder()
{
	std::stack<BinaryNode<T>*> s;
	BinaryNode<T>* curr = root;
	std::cout << "中序遍历：";
	while (curr || !(s.empty()))
	{
		if (curr) {
			s.push(curr);
			curr = curr->getLchild();
		}
		else
		{
			curr = s.top();
			std::cout << curr->getElem() << " ";
			s.pop();
			curr = curr->getRchild();
		}
	}
	std::cout << std::endl;
}

template<typename T>
BinaryNode<T>* BinaryTree<T>::getRoot() const
{
	return root;
}

template<typename T>
void BinaryTree<T>::postOrder(BinaryNode<T>* tree)
{
	if (tree)
	{
		postOrder(tree->getLchild());
		postOrder(tree->getRchild());
		std::cout << tree->getElem() << " ";
	}
}

template<typename T>
void BinaryTree<T>::levelOrder()
{
	std::queue<BinaryNode<T>*> q;
	BinaryNode<T>* curr = root;
	if (curr)
	{
		q.push(curr);  //根节点先入队
	}
	std::cout << "层序遍历：";
	while ( !(q.empty()) )
	{
		std::cout << q.front()->getElem() << " ";
		curr = q.front();
		q.pop();
		if (curr->getLchild())
		{
			q.push(curr->getLchild());
		}
		if (curr->getRchild())
		{
			q.push(curr->getRchild());
		}
	}
}
