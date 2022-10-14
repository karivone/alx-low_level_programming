#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints namee
 * @name: name of the user
 * @f: pointer to the function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
