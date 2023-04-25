#include "main.h"

/**
* print_string - print string
* @args: pointer to args
* Return: count of bytes printed
*/

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	return write(1, s, strlen(s));
}
