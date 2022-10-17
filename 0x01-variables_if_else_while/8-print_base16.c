#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Function : 0 if closed properly, otherwise 1
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
