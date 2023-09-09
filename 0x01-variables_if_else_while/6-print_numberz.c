#include <stdio.h>
/** 
 * main - main function
 * Description:printing number from 0 to 10
 * Return: 0
 */

int main(void)
{
	int count = 0;

	while (count < 10)
	{
		putchar((count % 10) + '0');
		count++;
	}
	putchar('\n');
	return (0);
}
