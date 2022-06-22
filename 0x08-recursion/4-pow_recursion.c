#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponential number
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
int a = (y - 1);
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, a));
}
