#include <stdio.h>
/**
 * main -main block
 * description: compute and print even numbers
 * followed by new line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, nxt = 0;
	int sum = 0;

	while (nxt < 4000000)
	{
		nxt = a + b;
		a = b;
		b = nxt;
		if (nxt % 2 == 0)
			sum += nxt;
	}
	printf("%i\n", sum);
	return (0);
}
