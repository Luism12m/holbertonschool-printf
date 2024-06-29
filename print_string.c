#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
* print_string - Imprime una cadena
* @ptr: Puntero a va_list que contiene la cadena
* @len: Puntero al contador de longitud
*/
void print_string(va_list ptr, int *len)
{
char *str = va_arg(ptr, char*);

if (str == NULL)
{
write(1, "(null)", 6);
(*len) += 6;
}
else
{
write(1, str, strlen(str));
(*len) += strlen(str);
}
}
