#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * in lowercase
 *
 * Return: void. No return value
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
			_putchar('\n');
		}
	}
		_putchar('\n');
}
