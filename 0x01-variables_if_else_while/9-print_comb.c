#include<stdio.h>
/**
 * main - Entry point
 * Decription: Prints all possible combinations of single-digit numbers
 * Return: 0
 **/
int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)
{
putchar(n + 48);
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
