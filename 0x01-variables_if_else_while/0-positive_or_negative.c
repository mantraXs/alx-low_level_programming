#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes here */
/**
 * main - init
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%u is zero\n", n);
	else
		printf("%u is positive\n", n);
	return (0);
}
