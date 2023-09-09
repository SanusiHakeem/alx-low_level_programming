#include <stdio.h>
/**
 * main-main function
 * Description: prints all possible combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
	for(int i = 0; i <= 9; i++)
	{
		putchar((i % 10)+ '0');
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
