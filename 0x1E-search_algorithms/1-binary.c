#include "search_algos.h"

/**
* print_arr - helper func to print array everytime array is halved
* @array: array
* @l: left index of original array
* @r: right index of original array
*/
void print_arr(const int *array, unsigned int l, unsigned int r)
{
	printf("Searching in array: ");
	for (unsigned int i = l; i <= r; i++)
	{
		if (i != r)
		    printf("%d, ", array[i]);
		else
		    printf("%d\n", array[i]);
	}
}
/**
* binary_search - search mids
* @array: given array of ints
* @size: size of array
* @value: value to search for
* Return: index at which value's found
*/
int binary_search(const int *array, unsigned int size, int value)
{
    unsigned int mid = 0;
    unsigned int l = 0;
    unsigned int r = size - 1;

    if (!array)
        return (-1);

    do {
        print_arr(array, l, r);
        mid = (l + r) / 2;
        if (array[mid] == value)
             return (mid);
        else if (array[mid] > value)
             r = mid - 1;
        else
             l = mid + 1;
    } while (l <= r);

    return (-1);
}
