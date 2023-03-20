#include<stdio.h>
/**
 * main - Entry point
 * Decription: Prints all possible combinations of single-digit numbers
 * Return: 0
 **/
int main(void)
{
char i;
int n;
for (n = 0 ; n < 10 ; n++)
{
putchar(n + 48);
putchar(',');
putchar('\t');
}
putchar('\n');
return (0);
}
