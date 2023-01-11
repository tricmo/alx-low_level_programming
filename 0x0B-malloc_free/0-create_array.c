#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of size and assign a char c
 * @size: size of array
 * @c: char to be assigned to the size
 * Description: create array of size and assign char c
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
