#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"




void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
char *name;
unsigned int i;

va_start(ap, n);
for (i = 0; i < n; i++)
{
name = va_arg(ap, char *);
if(name == NULL)
{
printf("nil");
}
printf("%s", name);
if (separator && i  < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
