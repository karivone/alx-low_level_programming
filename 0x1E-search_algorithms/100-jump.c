#include "search_algos.h"

/**
 * jump_search - find square root, jump steps to
 * find match, end linear search
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_size = sqrt(size);
	size_t i = 0;
	size_t j = 0;

	if (!array)
		return (-1);
	while (j < size)
	{
		if (array[j] >= value || j == size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, j);
			while (i <= j)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);

				i++;
			}
			return (-1);
		}
		i = j;
		j += jump_size;
	}

	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	return (-1);
}
