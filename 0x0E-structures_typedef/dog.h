#ifndef STRTYP
#define STRTYP

/**
 * struct dog - a dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Longer description
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif /*STRTYP*/
