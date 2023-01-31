#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fn
 * @n: par
 * @...: var
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count, total = 0;

	va_start(ap, n);
	for (count = 0; count < n; count++)
	{
		total += va_arg(ap, int);
	}
	va_end(ap);
	return (total);
}
