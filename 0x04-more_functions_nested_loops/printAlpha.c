#include "main.h"

/**
 * printAlpha - prints alphabets
 *
 * Return: void
 */
void printAlpha(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'c' || i == 'k')
			_putchar(i);
		continue;
	}
}
