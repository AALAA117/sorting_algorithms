#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array:..
 * @size:..
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;
	int swaped;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		swaped = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			swaped = 1;
		}
		if (swaped == 0)
		{
			break;
		}
	}
}
