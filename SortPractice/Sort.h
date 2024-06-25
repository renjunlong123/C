#ifndef __SORT_H
#define __SORT_H

/*include*/
#include "stdio.h"
#include "time.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*function*/
int BubbleSort(unsigned int array[], const unsigned int array_len);
int SelectSort(unsigned int array[], const unsigned int array_len);
int QuickSort(unsigned int array[], int indexleft, int indexright);
void QuickSortTest(unsigned int array[], int indexleft, int indexright);

#endif
