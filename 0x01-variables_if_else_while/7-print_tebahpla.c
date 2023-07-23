#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Dscription: This print lowercase alphabet in reverse
 * Return: o (success)
*/
int main(void)
{
	char e;

	for (e = 'z'; e >= 'a'; e--)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
