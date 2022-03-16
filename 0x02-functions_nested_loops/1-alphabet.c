#include "stdio.h"
#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter ='a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

