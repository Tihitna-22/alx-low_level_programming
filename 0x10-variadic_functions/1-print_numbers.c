#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: Separator between numbers.
 * @n: Number of arguments.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
int num;
unsigned int i;

va_start(ap, n);
for (i = 0; i < n; i++)
{
num = va_arg(ap, int);
printf("%d", num);
if (separator && i  < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
