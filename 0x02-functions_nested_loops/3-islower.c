#include "main.h"
/**
 * _islower - entry point
 * Description: Check for lowercase character 
 * Return: 1 for lowercase. ofor the rest
 */
int _islower(int c)
{
int c;
if (c >= 'a' && c <= 'z')
{
printf("0");
}
else if (c >= 'A' && c <= 'Z')
{
printf("1");
}
return (0);
}
