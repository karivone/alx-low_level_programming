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
	int byteCount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
		dest[byteCount] = src[byteCount];
	for (; byteCount < n; byteCount++)
		dest[byteCount] = '\0';

	return (dest);
}
