#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/*convert num to ASCII*/
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
