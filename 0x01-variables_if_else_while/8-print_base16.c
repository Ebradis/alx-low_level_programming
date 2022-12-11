#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char r = 'a';
	int x;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
		{
			putchar(x + '0');
		}
		else
		{
			putchar(r);
			r++;
		}
	}
	putchar('\n');
	return (0);
}
