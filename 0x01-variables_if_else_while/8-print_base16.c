#include <stdio.h>

/**
 * main - Entry point
 * Description: Print out all numbers of base 16
 * in lowercase, use putchar
 *
 * Return: Always 0 (SUccess)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar (i);
	putchar('\n');
	return (0);
}

