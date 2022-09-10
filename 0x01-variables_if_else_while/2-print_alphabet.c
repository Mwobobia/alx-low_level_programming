#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char character = 'a';
while (character <= 'z')
{
putchar(character);
character++;
}
putchar('\n');
return (0);
}
