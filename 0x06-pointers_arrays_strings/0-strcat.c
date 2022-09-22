#include "main.h"

/**
 * _strcat - function commute strings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
