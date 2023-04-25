#include "main.h"

/**
* print_string - print string
* @args: pointer to args
* Return: count of bytes printed
*/

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	char *begin = s;

	while (*s)
	{
		_putchar(*s++);
	}
	return (*s - *begin);
}
