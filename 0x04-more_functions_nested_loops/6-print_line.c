#include "main.h"

/**
 * print_line -  draws a line
 * @n: parameter
 * Return: new line
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
