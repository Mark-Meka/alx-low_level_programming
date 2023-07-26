#include "main.h"
#include <stdio.h>

/**
 * main - append the src string to the dest string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
    int i, length;

    while (dest[length] != '\0')
    {
	    length++;
    }

    for (i = 0; src[i] != '\0'; i++, length++)
    {
	    dest[length] = src[i];
    }
    dest[length] = '\0';
    return (dest);
}
