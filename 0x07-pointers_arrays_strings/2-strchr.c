#include "main.h"
/**
  *_strchr - locates a character in a string.
  *@s: pointer to string.
  *@c: character to be found.
  *
  *Return: pointer to first occurence of the character.
  *or null if character is not found.
  */
char *_strchr(char *s, char c)
{
	char *p;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	if (s[i] == c)
	{
		p = &s[i];
	}
	return (p);
}
