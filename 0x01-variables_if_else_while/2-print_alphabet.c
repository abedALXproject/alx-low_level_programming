#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: this print alphbet in lower case
 * Return: 0 (success)
*/
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		putchar('\n');
	}
	return (0);
}
