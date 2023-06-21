#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @m: integer num
 *
 * Return: 0 or 1
*/

int _abs(int m)
{
	if (m < 0)
		m = (-1) * m;
	return (m);
}
