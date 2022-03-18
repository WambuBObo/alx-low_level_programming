#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: input value
 *
 * Description: draws a diagonal line on the termina
 * Return: ALways 0 (Success)
 */

void print_diagonal(int n)
{
int count = 0, size;

if (n > 0)
{
while (count < n)
{
for (size = 0; size < count; size++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
count++;
}
}
else
{
_putchar('\n');
}
}
