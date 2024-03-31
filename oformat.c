#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * oformat - %o format of printf
 * @arg: args
 * @c: var
 *
 * Return: void
 */
void oformat(va_list arg, int *c)
{
unsigned int num = va_arg(arg, unsigned int);
char buffer[12], temp;
int len = 0, rem, i, j;

	if (num == 0)
	{
		putchar('0');
		(*c)++;
		return;
	}

	while (num > 0)
	{
	rem = num % 8;
		buffer[len++] = rem + '0';
		num /= 8;
	}
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
	temp = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = temp;
	}

	for (i = 0; i < len; i++)
	{
		putchar(buffer[i]);
		(*c)++;
	}
}
