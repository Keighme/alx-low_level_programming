#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - start
 * @d: param
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
