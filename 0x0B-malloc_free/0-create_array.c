#include "main.h"
/**
 *create_array - array for printing a string
 *@size: number elements array
 *@c: character pointe
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int ;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}

}
