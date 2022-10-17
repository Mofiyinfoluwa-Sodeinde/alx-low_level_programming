#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: 0 if closed properly, otherwise 1
 */
int main(void)
{
	char qe;
	for (qe = 'a'; qe <= 'z'; qe++)
	{
		if qe != 'e' && qe != 'q'
			putchar(qe);
	}
	putchar('\n');
	return (0);
}

