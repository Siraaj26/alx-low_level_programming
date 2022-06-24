#include "main.h"
/**
 * _isdigit - checks for a digit from 0 through 9
 * @c:variable checked
 * Return: 1 if a digit and 0 if other
 */
int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
