#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * sformat - handles the strings in printf
 * @arg: list of inputs
 * @count: number of characters printed
 * Return: nothing
 */
void sformat(va_list arg, int *count)
{
	char *str = va_arg(arg, char*);
	char *n_str = "(null)";
	if (str == NULL)
	{
		while(*n_str != '\0')
		{
			putchar(*n_str++);
			(*count)++;
		}
	} else 
	{
		while (*str !='\0')
		{
			putchar(*str++);
			(*count)++;
		}
	}
}
