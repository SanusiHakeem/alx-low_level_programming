#include <stdio.h>

int main()
{
        char alphabet = 'a';

        while (alphabet <= 'z') {
		if (alphabet == 'q' || alphabet == 'e') {
			putchar('');
		} else {
                	putchar(alphabet);
		}
                alphabet++;
        }
        printf("\n");
        return (0);
}
