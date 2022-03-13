#include <stdio.h>

/**
 * main -Entry poin
 * Description: Prints all alphabets in lower case
 *
 * Rreturn: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}

