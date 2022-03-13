#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints out all numbers under 10
 * no use of char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

