#include <stdio.h>
#include <stdlib.h>
/**
 * main - Return base hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	char ch = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
