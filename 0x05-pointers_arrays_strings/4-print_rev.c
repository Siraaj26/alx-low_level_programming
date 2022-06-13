#include "main.h"
/**
 * print_rev - print a sentence in reverse
 * @s: the pointer which links to string
 * Return: reverse of string
 */
void print_rev(char *s)
{
int i = 0;

while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n')
}
