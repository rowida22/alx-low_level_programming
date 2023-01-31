#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - fn
 * @separator: sign
 * @n: arg
 * @...: num
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int pos;

	va_start(num, n);

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", va_arg(num, int));
		if (pos != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
