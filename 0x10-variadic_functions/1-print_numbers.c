#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers -  prints all  number with a seperator
 * @separator: string to be print
 * @n: number of integers passed
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

va_start(list, n);

for (i = 0; i < n; i++)
{
printf("%i", va_arg(list, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(list);

putchar('\n');
}
