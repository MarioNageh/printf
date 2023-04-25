#ifndef UNTITLED_MAIN_H
#define UNTITLED_MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



/**
* struct format - used to make the project more dynamic
* @s: the char to compare
* @f: the function to execute when match s
*/

typedef struct format
{
	char *s;
	int (*f)();
} converter;



int count_the_converter_array(converter *s);

int _putchar(char s);
int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_specifier(void);

int printer_select(const char *format,int *ind, va_list list);

#endif
