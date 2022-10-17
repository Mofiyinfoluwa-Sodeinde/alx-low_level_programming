#include <stdio.h.

/**
 * prints the alphabet in lowercase in reverse
 *
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
