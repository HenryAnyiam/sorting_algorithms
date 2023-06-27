#include "sort.h"

/**
 * swaps - swaps two integer pointer
 * @a: first integer pointer
 * @b: second integer pointer
 */
void swaps(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an algorithm with bubble sort
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap = 0;

	if (size <= 0)
		return;
	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swaps(&array[j], &array[j + 1]);
				swap = 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
			break;
		swap = 0;
	}
}
