#include "main.h"
/**
 *_isalpha - check main
 *Description: return 1 if c is a letter(uppercase or lowercase) and 0 if other
 *@c: input character
 *Return: 1 if letter and 0 if other character
 */
int _isalpha(int c)
{
if ((c >= 65) && (c <= 90))
return (1);
else if ((c >= 97) && (c <= 122))
return (1);
else
return (0);
_putchar('\n');
return (0);
}
