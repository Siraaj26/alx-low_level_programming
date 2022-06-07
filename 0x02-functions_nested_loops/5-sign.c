#rint_sign - entry point
*@n: the integer value it recieves
*Return 1 if n is 0 or positive, -1 return 0
   */
  int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return(0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
return (0);
}
