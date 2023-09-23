#include <stdarg.h>
#include "main.h"

/**
 * b_format - prints unsigned int in binary format
 * @args: unsigned int
 *
 * Return: Void
 */
void b_format(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	int binary[32];
	int i, index;

	for (i = 0; i < 32; i++)
		binary[i] = 0;

	index = 31;

	while (value > 0)
	{
		binary[index] = value % 2;
		value /= 2;
		index--;
	}

	for (i = index + 1; i < 32; i++)
		_putchar('0' + binary[i]);

}
