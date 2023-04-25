#include "main.h"

/**
 * printer_select - this function used to select which function to.
 * print
 * @format: pointer to string
 * @ind: pointer to index
 * @list: pointer to args list
 * Return: Return the number of elements in c
 */

int printer_select(const char *format,int *i, va_list list)
{
	int chars_printed = 0 ,j = 0, len = 0;
	converter c[] = {
			{"%c", print_char}, {"%s", print_string},
			{"%%", print_specifier},
			{NULL, NULL}
	};

	for (j = 0; c[j].s != '\0'; j++)
		if (format[*i] == c[j].s[1])
			return (c[j].f(list));

	if (c[j].s == '\0')
	{
		if (format[*i] == '\0')
			return (-1);

		len += write(1, "%%", 1);

		if(format[*i - 1] == ' ')
			len += write(1, " ", 1);

	}
	return (chars_printed);
}
