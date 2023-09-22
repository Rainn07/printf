#include <unistd.h>
#include "main.h"
/**
  * _putchar - writes char to stdout
  * @c: char to print
  * Return: on succes (0)
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
