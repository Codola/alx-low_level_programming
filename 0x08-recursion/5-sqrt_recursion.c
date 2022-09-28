#include "main.h"

/**
 * _sqrt_recursion - main function
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Finds the natural square root of the number
 * @n: The number to find the square root of
 * @i: Root to be tester
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
