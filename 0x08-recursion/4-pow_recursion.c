#include "main.h"
/**
  * _pow_recursion - function that returns the value of x
  *		the value of y
  * @x: the input
  * @y: the power
  *
  * Return: the value of @x to the @y power
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
