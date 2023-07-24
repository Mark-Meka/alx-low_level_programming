#include "main.h"
#include <stdio.h>

/**
* main - reset to 98
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    *n = 98;
    printf("n=%d\n", n);
    return (0);
}
