#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	return (write(1, &c, 1));
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
