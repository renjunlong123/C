#include "Sort.h"



//const inline void Print_Function(const unsigned int array[], const unsigned int array_len);
//const inline void Gather_RandomNumber(unsigned int array[], const unsigned int array_len);
//
//int threeSumClosest(int* nums, int numsSize, int target) 
//{
//
//}
//
//
//int main()
//{
//#define ARRAY_LEN   10
//#define ARRAY_SZ	( sizeof(unsigned int) * ARRAY_LEN )
//	int a[9] = { 1,8,6,2,5,4,8,3,7 };
//	return 0;
//}
//
///**********************************************************************/
//const inline void Print_Function(const unsigned int array[], const unsigned int array_len)
//{
//	for (unsigned int i = 0; i < array_len; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}
//const inline void Gather_RandomNumber(unsigned int array[], const unsigned int array_len)
//{
//	srand((unsigned int)time(NULL));
//	for (unsigned int i = 0; i < array_len; i++)
//	{
//		array[i] = rand() % (100 + 1);
//	}
//#ifdef PRINT
//	Print_Function(array, array_len);
//#endif
//}

inline void Print_Function(const unsigned int array[], const unsigned int array_len);
inline void Gather_RandomNumber(unsigned int array[], const unsigned int array_len);

#define ARRAY_LEN   10000
#define ARRAY_SZ	( sizeof(unsigned int) * ARRAY_LEN )
#if 0
#define PRINT
#endif
/**********************************************************************/
int main(void) 
{
	unsigned int* array = (unsigned int*)malloc(ARRAY_SZ);
	if (array != NULL) 
	{
		/*Gather_RandomNumber(array, ARRAY_LEN);
		if (BubbleSort(array, ARRAY_LEN)) 
		{	
			Gather_RandomNumber(array, ARRAY_LEN);
			if(SelectSort(array, ARRAY_LEN))
			{

			}
		}*/
		Gather_RandomNumber(array, ARRAY_LEN);
		QuickSortTest(array,0,ARRAY_LEN-1);
	}
	else { printf("Failed to allocate memory\n"); }
	free(array);
	array = NULL;
	return 0;
}
/**********************************************************************/
inline void Print_Function(const unsigned int array[], const unsigned int array_len)
{
	for (unsigned int i = 0; i < array_len; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}
inline void Gather_RandomNumber(unsigned int array[], const unsigned int array_len)
{
	srand((unsigned int)time(NULL));
	for (unsigned int i = 0; i < array_len; i++)
	{
		array[i] = rand() % (40000 + 1);
	}
#ifdef PRINT
	Print_Function(array, array_len);
#endif
}

