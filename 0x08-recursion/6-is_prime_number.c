#include "main.h"
/**
 * pCheck - does it for me
 * @i: int for checking
 * @n: number supplied
 * Return: value
 */
int pCheck(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (pCheck(i + 1, n));
	return (1);
}
/**
 * is_prime_number - checks if it is prime or not
 * @n: number supplied
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (pCheck(i, n));
}
