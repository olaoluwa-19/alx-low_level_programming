#include "main.h"

/**
 * main - check description
 * Description: the main function is to print all the alphabet in lowercase
 * followed by a new line
 * Return: Always 0
*/
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
