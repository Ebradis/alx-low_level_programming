#include <stdlib.h>
#include <time.h>
#include <stdio.s>


/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\t", n, ld);
	if (ld == 0)
		printf("Last digit of %d is %d and is 0\t", n, ld);
		printf("Last digit of %d is %d and is less than 6 and not 0 \t", n, ld);
	return (0);

}
