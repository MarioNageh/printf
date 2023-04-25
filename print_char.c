#include "main.h"

/**
* print_char - print char
* @args: pointer to args
* Return: count of bytes printed
*/

int print_char(va_list args)
{
	int s = va_arg(args, int);

	return (_putchar(s));
}
