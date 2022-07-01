#pragma once
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "BinaryNode.h"
#include <iostream>
#include <stack>
#include <queue>

template<typename T>
class BinaryTree
{
protected:
	BinaryNode<T>* root;
public:
	BinaryTree(T);
	bool InsertNode(T elem);
	void preOrder();
	void inOrder();
	BinaryNode<T>* getRoot() const;
	static void postOrder(BinaryNode<T>*);
	void levelOrder();
};

#endif // !BINARYTREE_H

