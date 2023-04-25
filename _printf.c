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
	converter c[] = {
			{"%c", print_char}, {"%s", print_string},
			{"%%", print_specifier},
			{NULL, NULL}
	};
	int c_len = count_the_converter_array(c);
	int i = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < c_len; ++i)
			{
				if (*format == c[i].s[1])
				{
					chars_printed += c[i].f(args);
					break;
				}
			}
		}
		else
		{
			chars_printed += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}
