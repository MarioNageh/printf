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
	int i = 0, j = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				chars_printed = -1;
				break;
			}

			for (j = 0; j < c_len; ++j)
			{
				if (format[i+1] == c[j].s[1])
				{
					chars_printed += c[j].f(args);
					break;
				}
			}
			i++;

		}
		else
		{
			chars_printed += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (chars_printed);
}
