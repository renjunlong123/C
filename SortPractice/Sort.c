#include "Sort.h"


static inline void SwapValue(unsigned int* array_a, unsigned int* array_b)
{
	int temp_value = *array_a;
	*array_a = *array_b;
	*array_b = temp_value;
}

/* Function_Name:BubbleSort*/
int BubbleSort(unsigned int array[], const unsigned int array_len)
{
	if (array)
	{
		int start_time = clock();
		for (unsigned int i = 0; i < array_len; i++)
		{
			int bubblesoft_flag = 0;
			for (unsigned int j = 0; j < array_len - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					SwapValue(&array[j], &array[j + 1]);
					bubblesoft_flag = 1;
				}
			}
			if (bubblesoft_flag == 0) { break; }
		}
		int end_time = clock();
		printf("BubbleSoft Time:%d\n", (end_time - start_time));
#ifdef PRINT
		printf("BubbleSoft:");
		Print_Function(array, array_len);
#endif
	}
	else { printf("The incoming array is null\n"); return 0; }
	return 1;
}


/* Function_Name:QucikSort*/
int GetMedian(unsigned int array[], int indexleft, int indexright)
{
	int temp = (indexleft+ indexright) / 2;

	return 0;
}

int _QuickSort_GetKey(unsigned int array[], int indexleft, int indexright)
{
	if (array)
	{
		int key = indexleft;

		int prev = indexleft;
		int current = indexleft + 1;
		while (current <= indexright)
		{
			if (array[current] < array[key] && prev != current)
			{
				prev++;
				SwapValue(&array[current], &array[prev]);
			}
			current++;
		}
		SwapValue(&array[key], &array[prev]);
		key = prev;
		return key;
	}
	return 0;
}
int QuickSort(unsigned int array[], int indexleft, int indexright)
{
	if (array)
	{
		if (indexleft >= indexright)
		{
			return 0;
		}
		int key = _QuickSort_GetKey(array, indexleft, indexright);
		QuickSort(array, indexleft, key - 1);
		QuickSort(array, key + 1, indexright);
	}
	return 0;
}
void QuickSortTest(unsigned int array[], int indexleft, int indexright)
{
	int start_time = clock();
	QuickSort(array, indexleft, indexright);
	int end_time = clock();
	printf("QuickSort Time:%d\n", (end_time - start_time));
#ifdef PRINT
	printf("QuickSort:");
	Print_Function(array, indexright + 1);
#endif
}

/* Function_Name:SelectSort*/
int SelectSort(unsigned int array[], const unsigned int array_len)
{
	if (array)
	{
		int start_time = clock();
		unsigned int begini = 0, endi = array_len - 1;
		while (begini < endi)
		{
			unsigned mini = begini, maxi = begini;
			unsigned i = 0;
			for (i = begini; i < endi; i++)
			{
				if (array[i] <= array[mini]) mini = i;
				if (array[i] >= array[maxi]) maxi = i;
			}
			SwapValue(&array[mini], &array[begini]);
			if (maxi == begini)
			{
				maxi = mini;
			}
			SwapValue(&array[maxi], &array[endi]);
			begini++;
			endi--;
		}
		int end_time = clock();
		printf("SelectSort Time:%d\n", (end_time - start_time));
#ifdef PRINT
		printf("SelectSort:");
		Print_Function(array, array_len);
#endif
	}
	else { printf("The incoming array is null\n"); return 0; }
	return 1;
}