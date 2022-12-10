#include <stdio.h>
/**
 * main - Entry point
 * Program to print alphabet in
 * lower case without q and e
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
