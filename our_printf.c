#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - produces an output according to a format
 * @format: format in which something will be printed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list arg;
char f;
int c = 0;
va_start(arg, format);
while ((f = *format++) != '\0')
{
	if (f == '%')
	{
		f = *format++;
		if (f == '\0')
		{
			putchar('%');
			c++;
			break;
		}
		switch (f)
		{
			case 'd': case 'i':
				diformat(arg, &c);
				break;
			case 's':
				sformat(arg, &c);
				break;
			case 'c':
				cformat(arg, &c);
				break;
			case '%':
				percentformat(arg, &c);
				break;
			case 'o':
				oformat(arg, &c);
				break;
			case 'u':
				uformat(arg, &c);
				break;
			case 'x':
				xformat(arg, &c);
				break;
			case 'X':
				Xformat(arg, &c);
				break;
			case 'p':
				pformat(arg, &c);
				break;

			default:
			putchar('%');
			putchar(f);
			c += 2;
			break;
		}
	} else
	{
		putchar(f);
		c++;
	}
}
va_end(arg);
return (c);
}
