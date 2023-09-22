#include "main.h"
/**
  * _printf - a function that produces output accourding to a format
  * @format: takes in format specifiers
  * Return: number of chars printed
  */
int _printf(const char *format, ...)
{
	int ncount = 0;
	va_list args;
	format_specifier specifiers[] = {
		{'c', c_format},
		{'s', s_format},

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			ncount++;
		}
		else
		{
			format++;

			for (int i = 0; specifiers[i].type != '\0'; i++)
			{
				if (*format == specifiers[i].type)
				{
					specifiers[i].f(args);
					ncount++;
					break;
				}
			}
			else
				_putchar('%');
				ncount++;
		}
	}
	va_end(args);
	return (ncount);
}
