#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char qe;

	for (ten = 0; ten <= 9; ten++)

		for (qe = 'a'; qe <= 'z'; qe++)
			_putchar(qe);
	_putchar('\n');
}
