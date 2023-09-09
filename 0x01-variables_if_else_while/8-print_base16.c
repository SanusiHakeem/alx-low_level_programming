#include <stdio.h>
/**
 * main - main function
 * Description:prints all number of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int number = 0;
	char letter = 'a';

	while (number <= 9)
	{
		putchar((number % 10) + '0');
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
