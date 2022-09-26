#include "main.h"
/**
  * _memcpy - copies memory area
  * @dest: where to copy the memory to
  * @n: the number of bytes to copy
  * @src: the memory area to copy from
  *
  * Return: a pointer to the @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
