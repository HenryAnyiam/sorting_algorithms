#include "sort.h"

/**
 * part - partition array
 * @array: array
 * @s: start
 * @e: end
 * @size: array size
 * )
 * Return: index
 */
int part(int *array, int s, int e, size_t size)
{
	int temp, pivot = array[e];
	int i, j;

	i = s - 1;
	for (j = s; j <= (e - 1); j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	i++;
	temp = array[i];
	array[i] = array[e];
	array[e] = temp;
	print_array(array, size);
	return (i);
}
/**
 * sort - sort
 * @array: array
 * @s: start
 * @e: end
 * @size: size
 */
void sort(int *array, int s, int e, size_t size)
{
	int i;

	if (s < e)
	{
		i = part(array, s, e, size);
		sort(array, s, i - 1, size);
		sort(array, i + 1, e, size);
	}
}
/**
 * quick_sort - sort with the quick sort algorithm
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	int i = 0, j = size - 1;

	if (size <= 0)
		return;
	sort(array, i, j, size);
}
