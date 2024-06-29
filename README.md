Implementación de printf README
Descripción general
Este repositorio contiene una implementación de la función _printf, que genera resultados basados ​​en un formato específico. La función admite varios especificadores de formato, como %c para caracteres, %s para cadenas, %d para decimales y %i para números enteros.


prototipo de función
int _printf(const char *formato, ...);

Instrucciones de ejecución
Para ejecutar la función _printf en su programa, siga estos pasos:

1.Incluya el archivo de encabezado: incluya el archivo de encabezado "your_header_file.h" en su archivo fuente, donde desea utilizar la función _printf. #incluye "tu_archivo_encabezado.h"

2.Llame a la función _printf: use la función _printf en su código con el especificador de formato y los argumentos deseados. He aquí un ejemplo:

int main(void) {
    _printf("Displaying a straightforward sentence.\n");
    return 0;
}

3.Compile su código: Compile su código fuente, vinculándolo con los archivos de implementación. Por ejemplo, si su archivo fuente es "main.c" y los archivos de implementación son "print_char.c", "print_string.c", "print_decimal.c" y "your_header_file.h", puede compilar usando: gcc - o tu_programa main.c print_char.c print_string.c print_decimal.c
4.Ejecute su ejecutable: ./your_program

Uso

Ejemplo básico

#include "your_header_file.h"

int main(void) {
    _printf("Displaying a straightforward sentence.\n");
    return 0;
}
Output: Displaying a straightforward sentence.

Especificadores de formato

*Representa un caracter %c

*Representa una cadena %s

*Representa un decimal %d

*Representa un entero %i

Ejemplo:

#include "your_header_file.h"

int main(void) {
    _printf("%s", "This sentence is extracted from va_args!\n");
    return 0;
}
Output: This sentence is extracted from va_args!

Valor de Retorno

La función devuelve el recuento de caracteres impresos, excluyendo el byte nulo utilizado para finalizar la salida a cadenas.

Manejo de errores

En caso de uso de tipo incorrecto, la función devolverá un error.

Detalles de Implementacion

La implementación incluye los siguientes archivos fuente:

* _putchar.c: Contiene la implementación de la función _putchar.
  
* print_char.c: Contiene la implementación de la función para imprimir caracteres (%c).
  
*print_string.c: Contiene la implementación de la función para imprimir cadenas (%s).

*print_decimal.c: Contiene la implementación de las funciones para imprimir decimales (%d y %i).

Autor

Luis Zipa

