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

/**
* print_string_byte - print string bytes
* @args: pointer to args
* Return: count of bytes printed
*/
int print_string_byte(va_list args)
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

		if ((*s > 0 && *s < 32) || *s > 127)
		{

			s = "\x00";
			s = intToCharWidth(*s, 16, 2);
			s = string_to_upper(s);
			while (*s)
				_putchar(*s++);
		}
		else
		{
			_putchar(*s++);
		}
	}
	return (s - begin);
}
