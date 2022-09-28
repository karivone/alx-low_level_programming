#include "main.h"
/**
  * _strlen_recursion - function that returnslength of string
  *
  *@s: string to be input
  *
  * Return: void
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
