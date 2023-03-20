#include<stdio.h>
/**
 * main - Entry point
 * Decription: Prints the lowercase characters without e && q using putchar
 * Return: 0
 **/
int main(void)
{
char i;
i = 'a';
while (i <= 'z')
{
if (i != 'e' && i != 'q')
putchar(i);
i++;
}
putchar('\n');
return (0);
}
