#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: If value is not present in array or if array is NULL, return -1,
 * else return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (right >= left)
	{
		int s;

		printf("Searching in array: ");
		for (s = left; s < right; s++)
		{
			printf("%d, ", array[s]);
		}
		printf("%d\n", array[right]);

		mid = (left + right) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}


	}
	return (-1);
}

