#include <unistd.h>

/**
 * main - Entry point
 * Description: This print  - Dora Korpar, 2015-10-19, to the standard error
 * Return: always return 1.
*/
int main(void)
{
	write(2,
	      "and that piece of art is useful\" = Dora korpar, 2025-10-19\n",
	      59);
	return (1);
}
