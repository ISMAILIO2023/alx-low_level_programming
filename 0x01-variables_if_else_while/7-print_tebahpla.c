#include<stdio.h>
/**
 * main - Entry point
 * Decription: Prints the lower using putchar in reverse
 * Return: 0
 **/
int main(void)
{
char i;
for (i = 'z' ; i >= 'a' ; i--)
putchar(i);
putchar('\n');
return (0);
}
