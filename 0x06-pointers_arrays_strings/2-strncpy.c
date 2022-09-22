#include "main.h"
/**
  *_strncpy - a function that copies a string
  *@dest: pointer to  destination string
  *@src: pointer to the source string
  *@n: number of bytes to be used
  *
  * Return: pointer to destination string
  */
char _strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
