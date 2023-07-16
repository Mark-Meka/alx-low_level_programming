#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '0' + 9; i++)
	{
		putchar(i);
	}

	char alp[6] = "abcdef";
	int j;

	for (j = 0; j < 6; j++)
	{
		putchar(alp[j]);
	}

	putchar('\n');
	return (0);

