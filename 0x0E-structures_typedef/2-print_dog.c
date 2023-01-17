#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d);
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
		printf("Age: %f\n", d->age)
	}
}
