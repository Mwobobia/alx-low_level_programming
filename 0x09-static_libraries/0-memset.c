#include "main.h"

/**
 * _memset - prototype to fill memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes in s
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
