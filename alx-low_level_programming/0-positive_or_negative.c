#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - PR that test the sign of numer n
 * Description: check the nature of n
 * Return:0(Success)
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
