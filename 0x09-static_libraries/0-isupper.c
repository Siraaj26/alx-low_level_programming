#include "main.h"
/**
 * _isupper - entry point
 * Description: check for uppercase character
 *@c: variable checked
 * Return: 1 if c is uppercase and 0 if other character
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
