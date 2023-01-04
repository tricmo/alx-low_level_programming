#include "main.h"
/**
 * _puts_recursion - function that prints string and
 *  new like standard put
 * @s: character pointer
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
