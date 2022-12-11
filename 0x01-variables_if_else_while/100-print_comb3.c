#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one;
	int two;

		for (two = 0; two <= 9; two++)
		{
			for (one = two + 1; one <= 9; one++)
			{
				putchar(two + '0');
				putchar(one + '0');
				if (two < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);

}
