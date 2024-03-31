#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *uformat - does the %u in print f
 *@arg: arguments
 *@c: var in use for unsigned int
 *
 *Return: Void
 */
void uformat(va_list arg, int *c)
{
unsigned int num = va_arg(arg, unsigned int);
char buffer[12], temp;
int len = 0, i, j;

	do {
	buffer[len++] = num % 10 + '0';
	num /= 10;

	} while (num > 0);

	buffer[len] = '\0';

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = buffer[i];

		buffer[i] = buffer[j];

		buffer[j] = temp;
	}

	for (i = 0; i < len; i++)
	{
		putchar(buffer[i]);
		(c)++;
	}
}
