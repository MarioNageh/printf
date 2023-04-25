#include "main.h"

/**
* _printf - the printf function
* @format: the format buffer
* @...: the variable argument variadic function
* Return: return number of bytes printed
*/

int _printf(const char *format, ...)
{
	int chars_printed = 0;
	va_list args;


	int i = 0, inner_printer_chars;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; (format && format[i] != '\0'); i++)
	{
		if (format[i] != '%')
		{
			chars_printed += _putchar(format[i]);
		}
		else
		{
			i++;
			inner_printer_chars = printer_select(format, &i, args);
			if (format[i] == '%' && inner_printer_chars)
				return (-1);
			chars_printed += inner_printer_chars;
		}
	}

	va_end(args);
	return (chars_printed);
}
