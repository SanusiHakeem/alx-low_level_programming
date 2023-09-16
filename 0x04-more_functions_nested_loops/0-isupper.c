#include "main.h"

/**
* main- function that returns true if char is in uppercase
* Returns - 1 true and 0 otherwiser
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
