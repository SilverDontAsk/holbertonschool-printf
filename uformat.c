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
void uformat(va_list arg, int c)
{
unsigned int num = va_arg(arg, unsigned int);
char buffer[12];
int len = 0;

	do {
	buffer[len++] = num % 10 + '0';
	num /= 10;

	} while (num > 0);

	buffer[len] = '\0';

	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp = buffer[i];

		buffer[i] = buffer[j];

		buffer[j] = temp;
	}

	for (int i = 0; i < len; i++)
	{
		putchar(buffer[i]);
		(c)++;
	}
}
