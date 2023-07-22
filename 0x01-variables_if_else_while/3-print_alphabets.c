#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print alphabet in lowercase, and then in uppercase
 * Return: o (success)
*/
int main(void)
{
	char r, b;

	for (r = 'a'; r <= 'z'; r++)
	{
		putchar(r);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
		putchar('\n');
	}
	return (0);
}
