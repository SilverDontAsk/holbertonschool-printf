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
char buffer[12];
int len = 0;

	if (num == 0)
	{
		putchar('0');
		(*c)++;
		return;
	}

	while (num > 0)
	{
	int rem = num % 8;
		buffer[len++] = rem + '0';
		num /= 8;
	}
	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
	char temp = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = temp;
	}

	for (int i = 0; i < len; i++)
	{
		putchar(buffer[i]);
		(*c)++;
	}
}
