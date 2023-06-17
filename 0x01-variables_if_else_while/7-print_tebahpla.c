#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all letters from z to a
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch)
		ch--;
	}
	putchar('\n');

	return (0);
}
