#include <stdio.h>

/**
*main - The “Fizz-Buzz test” is an interview question designed to help filter
*out the 99.5% of programming job candidates 
*who can’t seem to program their way out of a wet paper bag.
*
*/

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%u\n", i);
		}
	}
	return (0);
}
