#ifndef UNTITLED_MAIN_H
#define UNTITLED_MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
* struct format - used to make the project more dynamic
* @s: the char to compare
* @f: the function to execute when match s
*/

typedef struct format
{
	char s;
	int (*f)();
} converter;



int count_the_converter_array(converter *s);

int _putchar(char s);
int buffer(char s);

int _printf(const char *format, ...);

/*
*int print_char(va_list args);
*int print_string(va_list args);
*int print_specifier(void);
*/

int print_string(va_list args);
int print_char(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int print_rot(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexadecimal_low(va_list args);
int print_hexadecimal_upp(va_list args);
int print_pointer(va_list args);
int print_rev_string(va_list args);

/*int printer_select(const char *format, int *ind, va_list list);*/
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);


int print(char *);
char *intToChar(long int num, int base);
int is_lowercase(char c);
char *string_to_upper(char *s);

#endif
