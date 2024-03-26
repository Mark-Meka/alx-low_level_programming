#include "main.h"

/**
 * check - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int check(int a, int b)
{
if (b < a)
{
	if (a % b == 0)
		return (0);
	else
		return (check(a, b + 1));
}
else
{
	return (1);
}
}

/**
  *is_prime_number - checks if number is prime or not.
  *@n: number to be checked.
  *
  *Return: 1 if number is prime.
  *0 if number is not prime.
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check(n, 2));

	}
}
