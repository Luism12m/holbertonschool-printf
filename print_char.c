#include <stdarg.h>
#include "main.h"

/**
* print_char - Imprime un caracter
* @ptr: Puntero a va_list que contiene el car
* @Len: Puntero a va_list que contiene el car
*/
void print_char(va_list ptr, int *len)
{
_putchar(va_arg(ptr, int));
(*len)++;
}
