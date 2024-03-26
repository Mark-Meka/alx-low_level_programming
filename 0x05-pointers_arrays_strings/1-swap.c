#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - swaps the values of the two integers
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
    int a;
    int b;

    a = 98;
    b = 42;
    
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    *a = &b;
    *b = &a;
    printf("a=%d, b=%d\n", a, b);
    return (0);
=======
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
>>>>>>> 6fc04222cc315dec6d9592051df8be37bfed0520
}
