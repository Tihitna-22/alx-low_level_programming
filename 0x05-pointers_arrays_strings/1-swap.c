#include "main.h"

/**
 * swap_int - Swap the values of two integers
 *
 * @a: pointer to the first value
 * @b: pointer to the second value
 */
void swap_int(int *a, int *b)
{
	/* make a temporary holding box for variables */
	int c;

	/* assign the value of a to c */
	c = *a;
	/* assign the value of b to the address at a */
	*a = *b;
	/* assign the c to the address at b */
	*b = c;
}
