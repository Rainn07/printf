#include "main.h"
#include <stdio.h>

/**
 * s_format - print str to stdout
 * @args: str to be printed
 *
 * Return: Void
 */

void s_format(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	}
	else
		exit(98);
}
