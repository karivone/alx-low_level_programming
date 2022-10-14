#include "stdio.h"
#include "variadic_functions.h"
#include "stdarg.h"


/**
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: number of parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str;

	va_list strs;

	va_start(strs, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
