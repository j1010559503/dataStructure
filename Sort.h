#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>
#include <iostream>

class Sort
{

};

template<typename T>
bool bubbleSort(std::vector<T>& arg);

template<typename T>
void chooseSort(std::vector<T>& arr);

int Paritition(int A[], int low, int high);

void quickSort(int A[], int low, int high);



#endif // !SORT_H