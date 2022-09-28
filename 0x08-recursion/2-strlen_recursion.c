#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - prototype to return string length
 * @s: string
 * Return: 0 success
 */

int _strlen_recursion(char *s)
{
	int i = 1;
	if (*s != '\0')
	{
	i += _strlen_recursion(s + 1);
	}
	else
	{
	i--;
	}
	return (i);
}
