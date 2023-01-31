#include <stdio.h>
#include "main.h"

/**
 * _strlen - function return the length of string
 * @s: parameter
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
