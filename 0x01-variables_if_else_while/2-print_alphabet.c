#include <stdio.h>
/**
 * main - Entry point
 * Program to print alphabet in
 * lower case
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
