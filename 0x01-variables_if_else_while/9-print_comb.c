#include <stdio.h>
/**
 * main - Entry point
 * Program to print single digits separated by ,
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
