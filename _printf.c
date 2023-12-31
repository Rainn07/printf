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
	int i, spec_found = 0;
	format_specifier specifiers[] = {
		{'c', c_format},
		{'s', s_format},
		{'d', d_i_format},
		{'i', d_i_format},
		{'b', b_format},
	};
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
			for (i = 0; specifiers[i].type != '\0'; i++)
			{
				if (*format == specifiers[i].type)
				{
					specifiers[i].f(args);
					ncount++;
					spec_found = 1;
					break;
				}
			}
			if (!spec_found)
			{
				_putchar('%');
				ncount++;
			}
			spec_found = 0;
		}
		format++;
	}
	va_end(args);
	return (ncount);
}
