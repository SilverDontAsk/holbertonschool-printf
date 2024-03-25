#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - produces an output according to a format
 * @format: format in which something will be printed
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list arg;
char word;
int n, divisor, digit;
char *strin;
va_start(arg, format);
while ((word = *format++) != '\0')
{
	if (word == '%')
	{
		word = *format++;
		if (word == 'd' || word == 'i')
		{
			num = va_arg(arg, int);
			if (num < 0)
			{
				_putchar('-');
				num = -num;
			}
			divisor = 1;
			while (nul / divisor >= 10)
				divisor *= 10;
			while (divisor > 0)
			{
				digit = num / divisor;
				_putchar('0' + digit);
				num %= divisor;
				divisor /= 10;
			}
		} else if (word == 's')
		{
			strin = va_arg(arg, char*);
			while (*strin != '\0')
			{
				_putchar(*str++);
			}


