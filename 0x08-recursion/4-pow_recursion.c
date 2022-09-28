#include "main.h"
#include <string.h>

/**
 * _pow_recursion - prototype to return value of integer raised to another
 * @x: integer
 * @y: power
 * Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
