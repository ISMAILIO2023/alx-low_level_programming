
#include<stdio.h>
/**
 * main - Entry point
 * Decription: Prints the lower- and Upper case characters using putchar
 * Return: 0
 **/

int main(void)
{
char i;
for (i = 'a'; i <= 'z' ; i++)
putchar(i);
for (i = 'A'; i <= 'Z' ; i++)
putchar(i);
putchar('\n');
return (0);
}
