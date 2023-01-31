#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the valuse of two int
 * @a: parameter
 * @b: parameter
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
