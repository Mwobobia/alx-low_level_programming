#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long x, max;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			max = number / x;
		}
	}
	printf("%ld\n", max);

	return (0);
}
