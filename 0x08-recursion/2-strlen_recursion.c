#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{

	if (*s)
	{
		_strlen_recursion(s + 1)
			_putchar(*s);
	}
}
