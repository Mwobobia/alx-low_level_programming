#include "main.h"
/**
 * print_alphabet_x10 - alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int n = 0;

	while (n <= 9)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		n++;
	}
}
