#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '0' + 9; i++)
	{
		putchar(i);

		if (i == '9')
		{
			putchar('\n');
			break;
		}

		putchar(',');
		putchar(' ');
	}
	return (0);

}
