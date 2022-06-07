#include "main.h"
/**
 * _islower - entry point
 * Description: Check for lowercase character
 *@c: the integer value it recieves
 * Return: 1 for lowercase. ofor the rest
 */
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
{
lower = 1;
}
}
return (lower);
}
