#include <stdio.h>

/**
 * main - main function
 * Description: the main function prints all single digits of base 10
 * followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
