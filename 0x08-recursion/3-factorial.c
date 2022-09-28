#include "main.h"
#include <string.h>

/**
 * factorial - prototype to return factorial of a number
 * @n: integer to return factorial
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
