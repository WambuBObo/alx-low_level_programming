#include "main.h"
/**
 * swap_int - swap the values
 * @a: pointer to a
 * @b: pointer to b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
