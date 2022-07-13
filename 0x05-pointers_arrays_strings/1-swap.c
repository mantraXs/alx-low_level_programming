#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first value
 * @b: second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int a_formal = *a;
	int b_formal = *b;

	*a = b_formal;
	*b = a_formal;
}
