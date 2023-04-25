#include "main.h"

/**
* _printf - the printf function
* @format: the format buffer
* @...: the variable argument variadic function
* Return: return number of bytes printed
*/

int _printf(const char *format, ...)
{

	va_list args;
	converter c[] = {
			{"%c", print_char}, {"%s", print_string},
			{"%%", print_specifier},
			{NULL, NULL}
	};
	int j = count_the_converter_array(c);
	int i = 0, chars_printed = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (c[j].s[0] == format[i] && c[j].s[1] == format[i + 1])
			{
				chars_printed += c[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		chars_printed++;
		i++;
	}

	va_end(args);
	return (chars_printed);
}
