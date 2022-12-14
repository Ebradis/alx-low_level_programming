#include "main.h"

/**
 *print_last_digit - prints the last digit
 * @n: the int in the function argument
 * Return: integer value
 */

int print_last_digit(int n)
{
	int ls;

	ls = n % 10;

	if (ls < 0)
		ls = ls * -1;
	_putchar(ls + '0');
	return (ls);
}
