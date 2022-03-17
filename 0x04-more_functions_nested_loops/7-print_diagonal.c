#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	int space = 0, i;

	if (n > 0)
	{
		while (n > 0)
		{
		for (i = 0; i < space; ++i)
		{
			_putchar(' ');
		}
		_putchar('\\');
		n--;
		space++;
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
