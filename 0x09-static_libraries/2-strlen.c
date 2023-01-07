#include "main.h"
/**
 * _strlen - To get the length of a string s is pointing to
 * @s: Character pointer to the string
 * Return: length
 */
int _strlen(char *s)
{
	int slen = 0;

	while (*s != '\0')
	{
		slen++;
		s++;
	}
	return (slen);
}
