#include "main.h"

/**
 * main - Enrty point
 * Description: print abcd.. to z
 * Return: always 0
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}

