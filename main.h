#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
  * format_specifier - corresponds to input format specifier
  * @type: format type
  * @f: function
  */
typedef struct
{
	char type;
	void (*f)(va_list args);
} format_specifier;

void c_format(va_list args);
void s_format(va_list args);

format_specifier specifiers[] = {
	{'c', c_format},
	{'s', s_format},
};

int _printf(const char *format, ...);
int _putchar(char c);

#endif
