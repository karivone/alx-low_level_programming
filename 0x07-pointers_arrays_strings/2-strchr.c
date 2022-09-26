#include "main.h"
/**
  * _strchr - returns a pointer to first
  * occurence of the character
  * @s: the string to check
  * @c: the character we are looking for
  * Return: a pointer to the first occurance of the character @c in the string
  * @s. Return NULL if the character isn't found
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
