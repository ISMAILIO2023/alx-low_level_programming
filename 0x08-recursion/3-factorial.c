#include "main.h"
/**
 * factorial - Returns the fact of a number.
 * @n: The number.
 *If n is lower than 0, the function should return -1 to indicate an error
 * Return: Factorial of 0 is 1.
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
return (n * factorial(n - 1));
}
