#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sort an array in bubble sort method
 * @array: Array tp be sorted
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp, swp;

	for (n = size, swp = 1; n > 0 && swp; n--)
	{
		swp = 0;
		for (i = 0; (i + 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				swp = 1;
			}
		}
	}
}
