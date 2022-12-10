#include <stdio.h>
/**
 * main - Entry point
 * Program to print alphabet in
 * lower case in reverse
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
