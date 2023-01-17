#include <stdlib.h>
#include <dog.h>

/**
 * inti_dog - initializes a variable of type struct dog.
 * @d: pointer to struct dog
 * @name: first member of the structure
 * @age: second member of the structure
 * @owner: third member of the structure
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
