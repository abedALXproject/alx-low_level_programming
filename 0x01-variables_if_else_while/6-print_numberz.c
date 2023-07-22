#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: this print numbers of base 10 starting from 0
 * Return: 0 (success)
*/
int main(void)
{
	int c;

	for (c = '0'; c < '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
