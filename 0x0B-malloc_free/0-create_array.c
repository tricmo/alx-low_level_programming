#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function to create arrays of characters and initializes it
 * @size: unsigned int pointer as input
 * @c: char pointer to an array of characters
 * Return: nothing
 */

char *create_array(unsigned int size, char c);
{
	unsigned int i;
	char *s1;

	if (size == 0 ¦¦ s1 == NULL)
	{
		return (NULL);
	}

	s1 = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		c = s1[i]
	}
	return (s1);
}
