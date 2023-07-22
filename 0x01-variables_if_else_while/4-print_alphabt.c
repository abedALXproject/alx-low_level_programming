#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print the alphabet in lowercase
 * Return: 0 (success)
*/
int main(void)
{
	char f, e, q;

	e = 'e';
	q = 'q';

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f != e && f != q)
		{
			putchar(f);
		}
	}
	putchar('\n');
	return (0);
}
