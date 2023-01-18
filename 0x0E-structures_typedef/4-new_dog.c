#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: 1st member.
 * @age: 2nd member.
 * @owner: 3rd member
 *
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner);
{
	int i, attrib1, attrib2;

	struct dog *d_dog = NULL;

	attrib1 = 0;
	while (name[attrib1] != '\0')
		attrib1++;

	attrib2 = 0;
	while (name[attrib2] != '\0')
		attrib2++;

	d_dog = malloc(sizeof(struct dog));
	if (d_dog == NULL)
	{
		free(d_dog);
		return (NULL);
	}
	d_dog->name = malloc(attrib1 + 1);
	if (d_dog->name == NULL)
	{
		free(d_dog->name);
		free(d_dog);
		return (NULL);
	}
	d_dog->owner = malloc(attrib2 + 1);
	if (d_dog->owner == NULL)
	{
		free(d_dog->name);
		free(d_dog->owner);
		free(d_dog);
		return (NULL);
	}
	for (i = 0; i <= attrib1; i++)
		d_dog->name[i] = name[i];
	for (i = 0; i <= attrib2; i++)
		d_dog->owner[i] = owner;
	d_dog->age = age;
	return (d_dog);
}
