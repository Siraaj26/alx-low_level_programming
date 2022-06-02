#include <stdio.h>
/**
 *main -Entry point
 *
 *Return: Always 0(Success)
 *
 */
int main(void)
{
  int x = sizeof(char);
  int y = sizeof(int);
  int z = sizeof(long int);
  int a = sizeof(long long int);
  int b = sizeof(float);

  printf("Size of char: %d byte(s)\n", x);
  printf("Size of int: %d byte(s)\n", y);
  printf("Size of long int: %d byte(s)\n", z);
  printf("Size of long long int: %d byte(s)\n", a);
  printf("Size of float: %d byte(s)\n", b);
  return (0);
}
