#include <stdio.h>

/**
 * main - main function
 *
 * Description: the main function prints the alphabet in lowercase, and in uppercase
 * followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
