#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: swaps value with b
 * @b: swaps value with a
 * Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
