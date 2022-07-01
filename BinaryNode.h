#pragma once
#ifndef BINARYNODE_H
#define BINARYNODE_H

template<typename T>
class BinaryNode
{
protected:
    T elem;
    BinaryNode<T>* lchild;
    BinaryNode<T>* rchild;
public:
    BinaryNode(T);
    BinaryNode<T>* getLchild() const;
    BinaryNode<T>* getRchild() const;
    T getElem() const;
    bool changeElem(T);
    bool setLchild(BinaryNode<T>*);
    bool setRchild(BinaryNode<T>*);
};

#endif // !BINARYNODE_H

