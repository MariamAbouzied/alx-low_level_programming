#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all letters from lower to higher
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*from a to z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*from A to Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
