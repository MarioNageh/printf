#include "main.h"

/**
 * print_octal - Print a unsigned octal
 * @list: Number to print
 *
 * Return: Length of the number
 **/

int print_octal(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intToChar(va_arg(list, unsigned int), 8);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

/**
 * print_hexadecimal_low - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_low(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intToChar(va_arg(list, unsigned int), 16);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

/**
 * print_hexadecimal_upp - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_upp(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intToChar(va_arg(list, unsigned int), 16);
	p_buff = string_to_upper(p_buff);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
