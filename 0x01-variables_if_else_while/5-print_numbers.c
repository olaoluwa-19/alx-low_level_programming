#include <stdio.h>

/**
 * main - main function
 * Description: the main function prints all single digit numbers of base 10
 * followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
