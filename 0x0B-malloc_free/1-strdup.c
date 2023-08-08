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
	char *c;
	int i = 0, size = 0;
	

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);
	
	if (m == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
