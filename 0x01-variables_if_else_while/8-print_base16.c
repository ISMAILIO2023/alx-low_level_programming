#include<stdio.h>
/**
 * main - Entry point
 * Decription: Prints all numbers of base  16
 * Return: 0
 **/
int main(void)
{
char i;
int n;
for (n = 0 ; n < 10 ; n++)
putchar(n + 48);
for (i = 'a'; i <= 'f' ; i++)
putchar(i);
putchar('\n');
return (0);
}
