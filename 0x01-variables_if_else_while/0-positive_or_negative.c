#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**

 * main - Entry point

 * Return: Always 0 (Success)

 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

		printf("%d is positive\n", n);

	else if (n == 0)

		printf("%d is zero\n", n);

	else

		printf("%d is negative\n", n);

	return (0);

}

^C
^c
clear
root@1b25d9e085cf:/alx-low_level_programming/0x01-variables_if_else_while# ls  

root@1b25d9e085cf:/alx-low_level_programming/0x01-variables_if_else_while#
