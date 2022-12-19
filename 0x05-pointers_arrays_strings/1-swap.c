#include "main.h"

/**
 * swap_int - To swap the value of two integers a and b
 * @a: first integer.
 * @b: secind integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
