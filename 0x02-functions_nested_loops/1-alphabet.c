#include "main.h"
/**
 * print_alphabet -entry point
 * Description: prints the alphabet in lowercase followed by new line
 * Return: void
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
