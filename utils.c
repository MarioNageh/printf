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


/**
 * intToChar - integer to ascii
 * @num: num
 * @base: base
 *
 * Return: char
 **/
char *intToChar(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Character
 * Return: 1 or 0
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
