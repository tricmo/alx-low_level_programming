#include <stdio.h>
/**
 * main - Entry point
 * Program to print single digits
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
