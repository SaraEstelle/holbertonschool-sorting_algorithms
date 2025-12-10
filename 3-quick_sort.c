#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array and prints the array.
 * @array: The array to print.
 * @size: The size of the array.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_ints(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		int tmp = *a;
		*a = *b;
		*b = tmp;
		print_array(array, size);
	}
}

/**
 * lomuto_partition - Lomuto partition scheme for quick_sort.
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition (pivot).
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap_ints(array, size, &array[i], &array[j]);
			i++;
		}
	}
	swap_ints(array, size, &array[i], &array[high]);
	return (i);
}

/**
 * quick_recursive - Recursive helper for quick_sort.
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: The starting index.
 * @high: The ending index.
 */
void quick_recursive(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot_idx = lomuto_partition(array, size, low, high);

		quick_recursive(array, size, low, pivot_idx - 1);
		quick_recursive(array, size, pivot_idx + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers using the Quick sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_recursive(array, size, 0, size - 1);
}
