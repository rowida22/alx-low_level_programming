#include <stdio.h>
#include <stdlib.h>
/**
 * main - Return num from 0-10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}


