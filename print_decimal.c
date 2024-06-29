#include <stdarg.h>
#include "main.h"


/**
* print_decimal - Imprime un decimal
* @ptr:Puntero a va_list que contiene la cadena
* @len:Puntero al contador de longitud
*/
void print_decimal(va_list ptr, int *len)
{
unsigned int i = 1;
int number = va_arg(ptr, int);

if (number < 0)
{
number = -number;
(*len)++;
_putchar('-');
}
while ((number / i) / 10 != 0)
{
i = i * 10;
(*len)++;
}
for (; i != 1; i /= 10)
{
_putchar((number / i) + '0');
number = number % i;
}

(*len)++;
_putchar((number % 10) + '0');
}
