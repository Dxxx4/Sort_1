#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>

typedef int size_t;

void PrintArr(int arr[], size_t size)
{
	size_t i = 0;
	while(i <= size-1)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

//≤Â»Î≈≈–Ú
void InsertSort(int arr[], size_t size)
{
	size_t i = 0;
	size_t j = 1;
	int key;
	size_t right;
	while(i < size-1){
		right = j;
		while(i >= 0 && arr[j] < arr[i]){
				key = arr[i];
				arr[i] = arr[j];
				arr[j] = key;
				j--;
				i--;
		}
		j = right+1;
		i = right;
	}

}


//œ£∂˚≈≈–Ú
void _InsertSort(int arr[], size_t size, size_t gap)
{
	size_t i = 0;
	size_t j;
	size_t k;
	int key;

	while(i < gap)
	{
		j = i;
		k = j+gap;
		while(k < size)
		{
			key = arr[j];
			if(arr[j] > arr[k])
			{
				arr[j] = arr[k];
				arr[k] = key;
			}
			j += gap;
			k += gap;
		}
		i++;
	}

}

void ShellSort(int arr[], size_t size)
{
	size_t gap = size;

	while(1)
	{
		gap = gap/3 + 1;
		_InsertSort(arr, size, gap);

		if(gap == 1)
		{
			break;
		}
	}
}

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//—°‘Ò≈≈–Ú
void SelectSrot(int arr[], size_t size)
{
	size_t minSp = 0;
	size_t maxSp = size-1;
	size_t minPos = minSp;
	size_t maxPos = maxSp;
	size_t i;
	while(minSp < maxSp)
	{
		for(i = minSp; i <= maxSp; i++)
		{
			if(arr[i] < arr[minPos])
			{
				minPos = i;
			}
		}
		Swap(&arr[minSp], &arr[minPos]);

		for(i = minSp; i <= maxSp; i++)
		{
			if(arr[i] > arr[maxPos])
			{
				maxPos = i;
			}
		}
		Swap(&arr[maxSp], &arr[maxPos]);

		minSp++;
		maxSp--;
	}
}

//øÏ≈≈(Õ⁄ø”∑®)
void QuickSort(int arr[], int left, int right)
{
	int begin = left;
	int end = right;
	int pivot = arr[right];

	if(left >= right)
	{
		return;
	}

	while(begin < end)
	{
		while(begin < end && arr[begin] <= pivot)
		{
			begin++;
		}
		arr[end] = arr[begin];

		while(end > begin && arr[end] >= pivot)
		{
			end--;
		}
		arr[begin] = arr[end];
	}
	arr[end] = pivot;

	QuickSort(arr, left, end-1);
	QuickSort(arr, end+1, right);
}


