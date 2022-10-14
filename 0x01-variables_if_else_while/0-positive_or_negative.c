#include<stdio.h>

/**
 * main - prints a program will assign a random number to the variable n each time it is executed
 * Return: 0 if closed properly, otherwise 1
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
