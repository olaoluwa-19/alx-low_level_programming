#include <stdio.h>

/**
 * main - main function
 *
 * Description: the main function prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

