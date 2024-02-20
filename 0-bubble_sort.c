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
			}
			swaped = 1;
		}
		print_array(array, size);
		if (swaped == 0)
		{
			break;
		}
	}
}
