#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	/*prints a - z*/
	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}

	/*print A - Z*/
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		++ALPH;
	}
	putchar('\n');

	return (0);
}
