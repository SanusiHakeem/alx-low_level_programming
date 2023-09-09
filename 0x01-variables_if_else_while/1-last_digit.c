#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* This program returns the last digit of a number */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d ", n);
	x = n % 10;
	if (x > 5)
	{
		printf("is %d and is greater than 5\n", x);
	}
	else if (x == 0)
	{
		printf("is %d and is 0\n", x);
	}
	else if (x < 6 && n != 0)
	{
		printf("is %d and is less than 6 and not 0\n", x);
	}
	return (0);
}
