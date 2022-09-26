#include "main.h"

/**
  * _strspn -function that returns the number of bytes
  * in the initial segment
  * @s: the string to check
  * @accept: character to match
  * Return: the number of bytes in the initial segment of @s which consist only
  *of bytes from @accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] > '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
