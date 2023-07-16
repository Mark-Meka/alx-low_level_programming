#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determin the last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ((n%10) > 5)
	{
		printf("the last digit of %d is %d and greater than\n", n, n%10);
	}
	else if ((n%10) < 6 && (n%10) != 0)
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n",n,n%10);
	}
	else
	{
		printf("the last digit of %d is %d and is 0\n",n,n%10);
	}
	return (0);
}