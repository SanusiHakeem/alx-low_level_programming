#include "main.h"
/**
 *print_rev - print string in reverse
 *@str: string pointer
 *Return: counter
 */
void print_rev(char *str)
{
	char *z = str;
	int i;
	int first_count = 0;
	int count = 0;

	while (*str != '\0')
	{
		str++;
		first_count++;
	}

	i = first_count - 1;
	while (i >= 0)
	{
		_putchar(*(z + i));
		i--;
		count++;
	}
}
