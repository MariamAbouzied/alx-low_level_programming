#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main fun.
 * Description: 0. Positive anything is better than negative nothing
 * Return: Always (0)*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0) {
		printf("n , is negative\n");
	}
	else if (n == 0) {
                printf("n , is zero\n");
        }
	else if (n > 0) {
                printf("n , is positive\n");
        }
	else {
		printf("Nothing");
	}
	return (0);
}
