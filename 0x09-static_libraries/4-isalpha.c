#include "main.h"

/**
 *_isalpha - contains parameter of int c
 *@c: print upper and lower
 *Description: Returns 1 if c is lowercase
 *Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
