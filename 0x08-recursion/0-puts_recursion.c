#include "main.h"
/**
  *_puts_recursion - prints a string followed by a new line.
  *@s: pointer to string.
  *
  *Return: void.
  */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar_recursion(s + 1);
}
