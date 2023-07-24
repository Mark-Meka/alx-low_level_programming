#include "main.h"
#include <stdio.h>

/**
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
}
