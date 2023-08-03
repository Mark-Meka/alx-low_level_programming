#include "main.h"
/**
 * _pow_recursion - power
 * @x:int
 * @y:int
 * Return:int
 */

int _pow_recursion(int x, int y)
{
	int n;
	
	if (y < 0)
		return (-1);
	else
	{
		n = _pow_recursion(x, y);
	}
	return (n);
}
