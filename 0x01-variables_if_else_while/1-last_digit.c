#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - prints a random number to the variable n 
 *  the value is stored in n
 *  Return: 0 if closed properly, otherwise 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d and is greater than 5\n", n);
	else if (n == 0)
		printf("%d and is 0\n", n);
	else if (n < 6)
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
