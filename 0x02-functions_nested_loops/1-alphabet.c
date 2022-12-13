#include "main.h"

/**
 * print_alphabet_in_lowercase - Entry point
 *
 * Return:0
 */

void print_alphabet(void)

{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}

	_putchar('\n');

}
