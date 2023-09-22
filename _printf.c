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
			if (*format == '%')
			{
				_putchar('%');
				ncount++;
				format++;
			}
			else if (*format == 'c')
			{
				_putchar(va_arg(args, int));
				ncount++;
				format++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				if (str)
					while (*str)
						_putchar(*str++);
						ncount++;

					format++;
			}
			else
				_putchar('%');
				ncount++;
		}
	}
	va_end(args);
	return (ncount);
}
