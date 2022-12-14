#include "main.h"

/**
 * Print_alphabet - Entry point
 *Description: prints the alphabet in lowercase, followed by new line
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
