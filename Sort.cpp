#include "Sort.h"

template<typename T>
bool bubbleSort(std::vector<T>& arg)  //ð������
{
	int tmp = 0;
	bool swap;	//�Ƿ񽻻�Ԫ�ر�־λ�ж�
	for (int i = arg.size() - 1; i > 0; --i)	//������ѭ������
	{
		swap = false;
		for (int j = 0; j < i; ++j) {	//�ڲ�Ƚ�Ԫ�ش�С
			if (arg[j] > arg[j + 1])
			{
				tmp = arg[j];
				arg[j] = arg[j + 1];
				arg[j + 1] = tmp;
				swap = true;
			}
		}
		if (swap == false) {	//���û����Ԫ�أ�˵���Ѿ�������ɣ��˳�ѭ��
			break;
		}
	}
	return true;
}

template<typename T>
void chooseSort(std::vector<T>& arr)  //ѡ������
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
		while (low < high && A[high] >= pivot) {  //�Ӻ���ǰ��С��
			--high;
		}
		A[low] = A[high];
		while (high > low && A[low] <= pivot) {
			++low;
		}
		A[high] = A[low];
	}
	A[low] = pivot;
	//std::cout << "����Ϊ��";
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
