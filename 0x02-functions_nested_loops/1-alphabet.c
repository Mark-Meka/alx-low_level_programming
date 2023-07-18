#include "main.h"
/**
  * main - print_alphabet
  *
  * Return: void. No return value
  */
void print_alphabet(void)
{
	char letter = 'a';
	
	while(letter <= 'z)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
