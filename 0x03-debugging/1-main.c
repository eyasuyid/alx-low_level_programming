#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n"); /* print infinty loop warning */

	i = 0;

	while (i < 10) /* compare i with 10 */
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}