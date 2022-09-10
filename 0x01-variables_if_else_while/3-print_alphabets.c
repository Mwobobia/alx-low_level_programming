#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main -Entry
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char lowalpha;
for (lowalpha = 'a'; lowalpha <= 'z'; lowalpha++)
{
putchar(lowalpha);
}
for (lowalpha = 'A'; lowalpha <= 'Z'; lowalpha++)
{
putchar(lowalpha);
}
putchar('\n');
return (0);
}
