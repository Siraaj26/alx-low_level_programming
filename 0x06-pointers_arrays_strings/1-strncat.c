#include "main.h"
/**
 * _strncat - functions to concatenate two strings
 * @dest: first string
 * @src: second string appended to the dest string
 * @n: max number of bytes to use from src string
 * Return: return a character string where dest comes first followed by src
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, ldest;

i = 0;
j = 0;
ldest = 0;
while (dest[i] != '\0')
{
ldest++;
i++;
}
while (j < n && src[j])
{
dest[ldest] = src[j];
ldest++;
j++;
}

dest[ldest + n + 1] = '\0';

return (dest);
}
