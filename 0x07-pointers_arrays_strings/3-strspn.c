#include "main.h"

/**
  * _strspn -function that returns the number of bytes
  * in the initial segment
  * @s: the string to check
  * @accept: character to match
  * Return: int
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, cmpt = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			cmpt++;
			break;
			}
		}
	if (accept[j] == '\0')
	{
		break;
	}
	return (cmpt);
}
