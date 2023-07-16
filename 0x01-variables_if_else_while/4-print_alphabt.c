#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
	{
		if (alp = [i] == 'e' || alp = [i] == 'q')
			i+=1;
	        putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
