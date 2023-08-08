#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *c = malloc(sizeof(str));
	long unsigned int i;

	if (str == 0 || c == 0)
		return (0);
	for (i = 0; i < sizeof(str); i++)
	{
		c[i] = *str;
	}
	return (0);
}
