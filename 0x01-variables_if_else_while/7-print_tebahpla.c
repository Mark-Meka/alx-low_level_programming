#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	
	for (i = 0; i < 26; i++)
		putchar(alp[i]);
	putchar('\n')
	return (0);	
}
