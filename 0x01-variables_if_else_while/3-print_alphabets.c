#include <stdio.h>
/**
 * main - Entry point
 * Program to print alphabet in
 * both lower and upper case
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
