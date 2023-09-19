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
			_putcha(*format);
			ncount++;
		}
		else
		{
			format++;

			switch (*format)
			{
				case 'c':

					_putcha(va_arg(args, int));
					ncount++;
					break;
				case 's':
					{
					char *str = va_arg(args, char*);

					if (str)
					{
					while (*str)
					{
						_putcha(*str);
						str++;
						ncount++;
					}
					}
					}
					break;
				case '%':
					_putcha('%');
					ncount++;
					break;
				default:
					{
					if (*format != '%')
					{
						_putcha(*format);
						ncount++;
					}
					break;
					}
			}
		}
		format++;
	}

	va_end(args);
	return (ncount);
}
