#include <unistd.h>
#include "main.h"
/**
  * _putcha - writes char to stdout
  * @c: char to print
  * Return: on succes (0)
  */
int _putcha(char c)
{
	return (write(1, &c, 1));
}
