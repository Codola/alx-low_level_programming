#include <stdio.h>
#include "main.h"

/**
 * _isupper - uppercase
 * @c: argument
 * Return: 0/1
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
