#include "main.h"

/**
 * swap_int - that swaps the values of two integers
 * @a: int b
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
