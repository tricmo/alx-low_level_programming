#include "main.h"
/**
 * swap_int - the function swaps the values of a and b
 * @a: first integer to be swapped
 * @b: another integer to be swapped
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
