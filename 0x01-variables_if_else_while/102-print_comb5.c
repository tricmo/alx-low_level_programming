#include <stdio.h>
/**
 * main - Entry point
 * Program to print four digits separated by ,
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b1;
	int b2;

	int c;
	int d1;
	int d2;

	while (a <= 98)
	{
		b1 = (a / 10 + '0');
		b2 = (a % 10 + '0');
		c = 0;
		while (c <= 99)
		{
			d1 = (c / 10 + '0');
			d2 = (c % 10 + '0');

			if (a < c)
			{
				putchar(b1);
				putchar(b2);
				putchar(' ');
				putchar(d1);
				putchar(d2);

				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		a++;
	}
	return (0);
}
