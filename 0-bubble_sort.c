#include "sort.h"
/**
 * swap - swaps two integers within an array
 * @xp: x position
 * @yp: y position
 * Return: void
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble Sort algorithm
 * @array: int - array
 * @size: size_t - size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array)
	{
		for (i = 0; i < (size - 1); i++)
		{
			for (j = 0; j < (size - i - 1); j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
			}
		}
	}
}
