#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * d_i_format - prints int & to stdout
 * @args: int
 *
 *  Return: Void
 */
void d_i_format(va_list args)
{
	int value = va_arg(args, int);
	int divisor;

	if (value < 0)
	{
		_putchar('-');
		value = -value;
	}

	divisor = 1;

	while (value / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{

		int digit = (value / divisor) % 10;

		_putchar('0' + digit);
		divisor /= 10;
	}
}
