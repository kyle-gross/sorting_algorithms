#include "sort.h"
/**
 * swap - swaps two integers within an array
 * @a: x position
 * @b: y position
 * Return: void
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 * partition - Lomuto partition scheme
 * @arr: array
 * @lo: lowest index
 * @hi: highest index
 * @size: size of original arr
 * Return: index
 */
int partition(int *arr, int lo, int hi, size_t size)
{
	int pivot = arr[hi];
	int i = lo - 1;
	int j;

	for (j = lo; j < hi; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	swap(&arr[i + 1], &arr[hi]);
	if ((i + 1) != hi)
		print_array(arr, size);

	return (i + 1);
}
/**
 * quicksort - recursive function to perform the sorting
 * @arr: array to sort
 * @lo: loweset index
 * @hi: highest index
 * @size: size of original arr
 * Return: void
 */
void quicksort(int *arr, int lo, int hi, size_t size)
{
	if (lo >= 0 && hi >= 0)
	{
		if (lo < hi)
		{
			int p = partition(arr, lo, hi, size);

			quicksort(arr, lo, p - 1, size);
			quicksort(arr, p + 1, hi, size);
		}
	}
}
/**
 * quick_sort - sorts an array of integers in ascending order using
 * the quick sort algorithm.
 *
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		quicksort(array, 0, size - 1, size);
}
