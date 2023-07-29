#include "sort.h"

/**
 * swap_ints - Swapping two integers in an array
 * @a: The first interger to swap
 * @b: Second interger in swapping
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort -Sorting an array of integers in ascending order in bubble form
 * @array: Contains integers to be sorted
 * @size: The length of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubble = false
			}
		}
		len--;
	}
}
