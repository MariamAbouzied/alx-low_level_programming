#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet ten times..
 *
 * Return: always 0
*/

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		fot (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
