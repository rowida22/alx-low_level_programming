#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}

	_putchar('\n');
}
