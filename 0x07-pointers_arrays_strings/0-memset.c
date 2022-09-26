#include "main.h"

/**
 *_memset - function fills the first n bytes
 * of the memory area pointed to by s with the constant
 * @s: pointer to memory area to file
 * @n: the number of bytes to fill
 * @b: constant byte
 *
 * Return: a pointer to the amemory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

