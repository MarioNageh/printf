#include "main.h"

/**
 * count_the_converter_array - used to count the converter elements
 * @c: the converter array
 * Return: Return the number of elements in c
 */

int count_the_converter_array(converter *c)
{
	int counter = 0;

	while (c[counter].s != '\0')
	{
		counter += 1;
	}
	return (counter);
}


/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}