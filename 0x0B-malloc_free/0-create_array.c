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
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(sizeof(char) * size);

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		for (position = 0; position < size; position++)
		{
			c = *(buffer + position)
		}

		return (buffer);
	}

}
