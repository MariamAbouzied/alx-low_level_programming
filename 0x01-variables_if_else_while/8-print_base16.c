#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print nums of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 48; /*48 is the decimal rep of 0*/

	while (num <= 102) /*102 is the decimal rep of f*/
	{
		putchar(num);

		/*after 9 we jump till 96*/
		if (num == 57)
			num += 39;
		num++;
	}
	putchar('\n');

	return (0);
}
