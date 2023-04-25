#include "main.h"

/**
* _printf - the printf function
* @format: the format buffer
* @...: the variable argument variadic function
* Return: return number of bytes printed
*/

int _printf(const char *format, ...)
{
	int printed_chars;
	va_list args;

	if (format == NULL)
		return (-1);

	printed_chars = strlen(format);
	if (printed_chars <= 0)
		return (0);

	va_start(args, format);
	printed_chars = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (printed_chars);
}
