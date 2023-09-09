#include <stdio.h>

int main()
{
        char alphabet = 'a';
	char capital = 'A';

        while (alphabet <= 'z') {
                putchar(alphabet);
                alphabet++;
        }
	while (capital <= 'Z') {
		putchar(capital);
		capital++;
	}
        printf("\n");
        return (0);
}
