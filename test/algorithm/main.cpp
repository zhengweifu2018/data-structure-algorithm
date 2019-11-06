#include "algorithm/sort/counting_sort.h"
#include "util/common.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace dsa;
using namespace std;

void countingSortTest() 
{
	const int len = 100000, max = 99, min = 0;
	int data[len];
	data[0] = max;
	data[len - 1] = 0;
	for (size_t i = 1; i < len - 1; ++i)
	{
		data[i] = rand() % (max + 1);
	}
	
	//util::printArray(data, len);

    countingSort(data, len, max, min);

	//util::printArray(data, len);
}

int main(int argc, char const *argv[])
{
	countingSortTest();

    system("pause");
    return 0;
}