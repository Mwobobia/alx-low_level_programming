#include "main.h"

/**
 * _strspn - prototype to get length
 * @s: check the original string
 * @accept: substring
 * Return: Number of bytes of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
				if (s[i] == accept[j])
				{
					count++;
				}
		}
	}
	return (count);
}
