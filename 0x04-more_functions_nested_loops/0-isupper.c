#include <ctype.h>
#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int a = isupper(c);

	if (a == 0)
		return (a);
	else
		return (1);
}
