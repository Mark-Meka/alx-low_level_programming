#include "main.h"
#include <stdio.h>

/**
  *_strspn - gets the lenght of a prefix substring.
  *@s: pointer to strin.
  *@accept: pointer to bytes that are checked
  *for in s.
  *
  *Return: return number of bytes in the initial
  *segment of s which consist only of bytes from
  *accept.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
