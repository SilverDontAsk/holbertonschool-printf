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
	while (*str !='\0')
	{
		putchar(*str++);
		(*count)++;
	}
}
