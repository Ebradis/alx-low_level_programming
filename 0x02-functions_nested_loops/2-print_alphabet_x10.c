#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return:0
 */

void print_alphabet_x10(void)
{

	char c;
	int x = 0;

	while (x < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			l++;
		}
		_putchar('\n');
		x++;
	}
}

