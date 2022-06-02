#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
int a = sizeof(char);
int b = sizeof(int);
int c = sizeof(long int);
int d = sizeof(long long int);
int e = sizeof(float);

printf("Size of char: %d byte(s)\n", a);
printf("Size of int: %d byte(s)\n", b);
printf("Size of long int: %d byte(s)\n", c);
printf("Size of long long int: %d byte(s)\n", d);
printf("Size of float: %d byte(s)\n", e);
return (0);
}
