#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: the conversion specifier to prints
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;

	f_dt form_types[] = {
		{ "i", print_integer },
		{ "c", print_c },
		{ "s", print_s },
		{ "f", print_f }
	};

	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(list, format);

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(list);

	printf("\n");
}

/**
 * print_integer - function that prints int
 * @list: argument of list
 * @separator: seperator
 * Return: nothing
 */

void print_integer(char *separator, va_list list)
{
	printf("%s%d", separator, va_arg(list, int));
}

/**
 * print_c - print char
 * @list: argument cha
 * @separator: seperator
 */

void print_c(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * print_s - prints strings
 * @separator: seperator
 * @list: list to print
 * Return: none
 */

void print_s(char *separator, va_list list)
{
	char *lists = va_arg(list, char *);
	
	if (lists == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	
	printf("%s%s", separator, lists);
}

/**
 * print_f - prints float
 * @separator: float to print
 * @list: next argument of list to print
 * Return: nothing
 */

void print_f(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}
