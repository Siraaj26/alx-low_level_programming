#include "main.h"
/**
 *print_last_digit - entry
 *Description: return last number
 *@n: number to be tested
 *Return: The last value
 */
int print_last_digit(int n)
{
int i;
i = (n % 10);
if (i < 0)
{
_putchar(-i + '0');
return (-i);
}
else
{
_putchar(i + '0');
return (i);
}
return (0);
}
