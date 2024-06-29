#include <unistd.h>

/**
* _putchar - escribe el caracter c en la salida estandar
* @c: El caracter a imprimir
*
* Return:Exito 1.
* Error, -1 es regresado, y error esta configurado apropiadamente.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
