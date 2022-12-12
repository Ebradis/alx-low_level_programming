#include <stdio.h>
/**
 * main - that prints all possible different combinations of three digits
 *
 * Return : 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int arr[3];

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			for (c = 0; c < 3; c++)
			{
				if (a != b && b != c && c != a)
				{
					putchar("\n", arr[a], arr[b], arr[c]);
				}
			}
		}
	}
}
