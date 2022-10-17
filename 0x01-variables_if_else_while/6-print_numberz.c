#include <stdio.h>
/**
 *  main - Prints all single digit numbers of base 10 starting from 0
 *
 *  Return: 0 if closed properly, otherwise 1
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10); + '0');
	
	printf('\n');

	return (0);
}
