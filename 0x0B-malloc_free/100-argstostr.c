#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of the program into a string
 * @ac: number of arguments passed in the program
 * @av: array of pointers to the arguments
 * Return: If ac == 0, av == NULL or function fails - NULL
 * otherwise - a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len = ac;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}

str = malloc(sizeof(char) * len + 1);

if (str == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k++] = av[i][j];
}
str[k++] = '\n';
}
str[len] = '\0';
return (str);
}
