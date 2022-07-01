#include "BinaryNode.h"

template<typename T>
BinaryNode<T>::BinaryNode(T elem) :lchild(nullptr), rchild(nullptr)
{
    this->elem = elem;
}

template<typename T>
BinaryNode<T>* BinaryNode<T>::getLchild() const
{
    return lchild;
}

template<typename T>
BinaryNode<T>* BinaryNode<T>::getRchild() const
{
    return rchild;
}

template<typename T>
T BinaryNode<T>::getElem() const
{
    return elem;
}

template<typename T>
bool BinaryNode<T>::changeElem(T elem)
{
    this->elem = elem;
    return true;
}

template<typename T>
bool BinaryNode<T>::setLchild(BinaryNode<T>* elem)
{
    lchild = elem;
    return true;
}

template<typename T>
bool BinaryNode<T>::setRchild(BinaryNode<T>* elem)
{
    rchild = elem;
    return true;
}