#include "main.h"

/**
  *_strncpy - a function that copies a string
  * @dest: pointer to destination string
  * @src: pointer to the source string
  * @n: number of bytes to be used
  *
  * Return: pointer to destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

