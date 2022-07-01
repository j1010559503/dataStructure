#include "BinaryTree.cpp"
#include "BinaryNode.cpp"
#include "LinkList.cpp"
#include "LinkListNode.cpp"
#include "Sort.cpp"

using namespace std;

int main()
{
	//链表
	LinkList<int>* test = new LinkList<int>();
	for (int i = 0; i < 10; ++i) {
		test->insertNode(i);
	}
	test->printLinklist();
//	std::cout << test->getHead()->getElem() << endl;
	std::cout << "链表长度为" << test->length() << endl;
	test->reverse();
	test->printLinklist();
	test->deleteNode(8);  //按值删除
	test->printLinklist();
	test->deleteNode(3, 1);  //按位删除
	test->printLinklist();
	std::cout << "链表长度为" << test->length() << endl;
	test->deleteNode(9, 1);
	test->deleteNode(9);
	test->deleteNode(9);
	test->printLinklist();
	LinkList<int> l2(*test);
	l2.printLinklist();
	//二叉排序树
	BinaryTree<int>* btree = new BinaryTree<int>(5);
	int a[9] = { 7,3,9,4,2,6,1,0,8 };
	for (int i = 0; i < 9; ++i)
	{
		btree->InsertNode(a[i]);
	}
	std::cout << std::endl;
	btree->preOrder();
	btree->inOrder();
	std::cout << "后序遍历：";
	BinaryTree<int>::postOrder(btree->getRoot());
	std::cout << std::endl;
	btree->levelOrder();
	std::cout << std::endl;
	//冒泡排序
	vector<int> s{5,6,9,2,4,7,3,0,1};
	bubbleSort(s);
	for (int i = 0; i < s.size(); i++)
	{
		std::cout << s[i] << " ";
	}
	std::cout << std::endl;
	//选择排序
	vector<int> s1{ 5,6,9,2,4,7,3,0,1 };
	chooseSort(s1);
	for (int i = 0; i < s1.size(); i++)
	{
		std::cout << s1[i] << " ";
	}
	std::cout << endl;
	//快速排序
	int a1[] = { 7,9,8,9,4,5,1,2,4 };
	quickSort<>(a1, 0, 8);
	for (int i = 0; i < 9; i++)
	{
		std::cout << a1[i] << " ";
	}
}


