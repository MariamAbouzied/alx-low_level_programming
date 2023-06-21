#include "main.h"

/**
 * _isalpha - Returns 1 if c is a letter lowercase or uppercase
 * returns 0 otherwise
 *
 * @c: ASCII char
 *
 * Return: 1 if letter 0 if else
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
