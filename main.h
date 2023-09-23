#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
  * struct format_specifier - corresponds to input format specifier
  * @type: format type
  * @f: function
  */
typedef struct format_specifier
{
	char type;
	void (*f)(va_list args);
} format_specifier;

void c_format(va_list args);
void d_i_format(va_list args);
void s_format(va_list args);
void b_format(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
