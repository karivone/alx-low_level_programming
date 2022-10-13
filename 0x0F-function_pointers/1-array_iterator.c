#include "functions_pointers.h"
/**
 * array_iterator - executes a function
 * @array: the array
 * @size: the size of an array
 * @action: a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int)
{
	size_t i; /*match data type*/

	if (array != NULL && action != NULL)

	for (i = 0; i < size; i++)

	action(*(array + i));
}
