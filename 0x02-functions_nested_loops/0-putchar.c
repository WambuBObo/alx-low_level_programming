#include <unistd.h>
#include <main.h>

/**
 * main - Entry point
 * Definitions: Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(text[i]);
		i++;
	}
	-putchar('\n');

	return (0);
}

