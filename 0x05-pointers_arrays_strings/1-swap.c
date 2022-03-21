#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @x: first parameter
 * @y: second parameter
 *
 * Description: swap_int swaps the value of *a and *b
 */
void swap_int(int *x, int *y)
{
	int c;

	c = *x;
	*x = *y;
	*y = c;
}
