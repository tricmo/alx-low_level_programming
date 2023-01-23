#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integer passed to the function
 * @...: A variable indicating numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ints;
	unsigned int i;

	va_start(ints, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ints, int);
		i++;

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(ints);
}
