#include "main.h"
#include <unistd.h>
/**
 * main - Entry point Check description void print_alphabet(void).
 * Description: This print alphabet, in lowercase
 * Return: 0 (success)
*/
void print_alphabet(void)
{
	char f = 'a';

	while (f <= 'z')
	{
		_putchar(f);
		f++;
	}
	_putchar('\n');
}
