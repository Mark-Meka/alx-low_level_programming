#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print a structure.
 * @d: pointer containing the structure.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";

	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name: %s", (*d).name);
	printf("Age: %f", (*d).age);
	printf("Owner: %s", (*d).owner);
}
