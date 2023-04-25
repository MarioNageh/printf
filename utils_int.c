#include "main.h"

/**
 * intToCharWidth - integer to ascii
 * @num: num
 * @base: base
 * @base: width
 *
 * Return: char
 **/

char *intToCharWidth(long int num, int base, int width)
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

	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;

	if (width <= 0)
	{
		return (ptr);
	}

	/* Add padding if necessary */
	int padding = width - (int)strlen(ptr);

	if (padding > 0)
	{
		memmove(ptr - padding, ptr, strlen(ptr) + 1);
		memset(ptr - padding, '0', padding);
		ptr -= padding;
	}

	return (ptr);
}
