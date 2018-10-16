#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

int main()
{
	int arr[10] = {5, 9, 4, 1, 0, 6, 8, 7, 3, 2};
	size_t size = sizeof(arr)/sizeof(arr[0]);

	/*InsertSort(arr, size);
	PrintArr(arr, size);*/

	/*ShellSort(arr, size);
	PrintArr(arr, size);*/

	/*SelectSrot(arr, size);
	PrintArr(arr, size);*/

	QuickSort(arr, 0, size-1);
	PrintArr(arr, size);

	system("pause");
	return 0;
}

