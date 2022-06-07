#include "main.h"
/**
  * print_alphabet_x10 - entry point
 * Description: print alphabet in lower case 10 times followed by a new line
 * Return:void
 */
void print_alphabet_x10(void)
{
int i, count;
for (count = 0; count < 10; count++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

