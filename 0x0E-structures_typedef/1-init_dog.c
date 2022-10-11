#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initilaizes a variable of struct dog
 * @d: dog to be initialized
 * @name: name of the dog
 * @age : age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

