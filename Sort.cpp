#include "Sort.h"

template<typename T>
bool bubbleSort(std::vector<T>& arg)  //冒泡排序
{
	int tmp = 0;
	bool swap;	//是否交换元素标志位判断
	for (int i = arg.size() - 1; i > 0; --i)	//外层控制循环次数
	{
		swap = false;
		for (int j = 0; j < i; ++j) {	//内层比较元素大小
			if (arg[j] > arg[j + 1])
			{
				tmp = arg[j];
				arg[j] = arg[j + 1];
				arg[j + 1] = tmp;
				swap = true;
			}
		}
		if (swap == false) {	//如果没交换元素，说明已经排序完成，退出循环
			break;
		}
	}
	return true;
}

template<typename T>
void chooseSort(std::vector<T>& arr)  //选择排序
{
	int temp = 0, min = 0;
	for (int i = 0; i < arr.size() - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		if (min != i) {
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}

template<typename T = int>
int Paritition(T A[], int low, int high)
{
	T pivot = A[low];
	while (low < high)
	{
		while (low < high && A[high] >= pivot) {  //从后往前找小的
			--high;
		}
		A[low] = A[high];
		while (high > low && A[low] <= pivot) {
			++low;
		}
		A[high] = A[low];
	}
	A[low] = pivot;
	//std::cout << "序列为：";
	//for (size_t i = 0; i < 9; i++)
	//{
	//	std::cout << A[i];
	//}
	return low;
}

template<typename T = int>
void quickSort(T A[], int low, int high)
{
	if (low < high)
	{
		T pivotElem = Paritition<T>(A, low, high);
		quickSort<T>(A, low, pivotElem - 1);
		quickSort<T>(A, pivotElem + 1, high);
	}
}
