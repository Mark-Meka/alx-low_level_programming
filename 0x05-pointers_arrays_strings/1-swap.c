#include "main.h"
#include <stdio.h>

/**
 * main - swap a to b
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    *a = b;
    *b = a;
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
