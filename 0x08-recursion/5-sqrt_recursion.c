#include "main.h"
/**
 * rCheck - checks for the root
 * @i: integer to prime for root
 * @n: integer supplied
 * Return: value of root
 */
int rCheck(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = rCheck(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - returns square root of n
 * @n: number supplied
 * Return: returns int of squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (rCheck(i, n) == n && n != 1)
		return (-1);
	return (rCheck(i, n));

}
