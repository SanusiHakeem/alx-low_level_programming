#include "main.h"

/**
* main- function that return 1 if number is a digit
* Returns - 1 or 0if (c >= '0' && c <= '9')
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
