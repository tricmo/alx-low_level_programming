#include <stdarg.h>
#include "VARIADIC.H"
/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: first constant input
 * ...: variable number of parameter
 * Return: if n != 0 - sum of all parameters
 *	Otherwise - 0.
 */

int sum_them_all(const unsigned int n, ...);
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	i = 0;
	while (i < n)
		sum += va_arg(ap, int);
		i++;

	va_end(ap);
	return (sum);
}
