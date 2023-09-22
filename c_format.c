#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * c_format - prints int to stdout
 * @args: int
 *
 *  Return: Void
 */

void c_format(va_list args)
{
	int character = va_arg(args, int);

	_putchar(character);
}
