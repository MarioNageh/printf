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
	int i;

	if (s == NULL)
	{
		s = "(null)";
		for (i = 0; i < 6; ++i)
		{
			_putchar(s[i]);
		}
		return (6);
	}

	while (*s)
	{
		_putchar(*s++);
	}
	return (s - begin);
}
