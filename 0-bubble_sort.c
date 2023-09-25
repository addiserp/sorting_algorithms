#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: An array in put
 * @size: An array size
 */

void bubble_sort(int *array, size_t size)
{

	size_t asize, index, temp = 0;

	if (size < 2)
		return;
	for (asize = 0; asize < size; asize++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			temp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = temp;
			print_array(array, size);
			}
		}
}
