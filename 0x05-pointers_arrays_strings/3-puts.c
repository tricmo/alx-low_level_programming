#include "main.h"

/**
 * _puts - used to print a string to stdout
 * @str: string that will be printed to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
