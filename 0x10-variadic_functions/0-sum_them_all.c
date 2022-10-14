#include "stdarg.h"
#include "variadic_functions.h"

/**
 * sum_them_all - sums all available numbers
 * @n: number to add
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	unsigned int j;
	va_list add;

	va_start(add, n);
	if (n == 0)
		return (0);
	j = 0;
	while (j < n)
	{
		i = va_arg(add, int);
		sum += i;
		j++;
	}

	va_end(add);

	return (sum);
}

