#include "main.h"

/**
 * swap_int - check the code
 * @a: variable.
 * @b: variable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
