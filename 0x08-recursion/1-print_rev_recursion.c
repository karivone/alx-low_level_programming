#include "main.h"
/**
  * _print_rev_recursion - prinnts a string in reverse
  *
  * @s: the string to print
  *
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
