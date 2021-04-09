// Librerias
// Directivas del pre-procesador

// Zona de definición de librerías

#include <stdio.h> // Esta libreria contiene standares de entradas y salidas
#include <stdint.h> // Standares de longitud de variables de datos ENTEROS

// Zona de definición de variables

// TIPOS DE DATOS NATIVOS

int datoA = 24; // Entero

unsigned int datoB = 23; // Entero solo para valores positivos 4 bytes

signed int datoC = -24; // Entero para valores con signo

float temperatura = 24.4; // Decimales 4 bytes

double presion = 34.90457; // Decimales - Dobles 8 bytes

unsigned char letra = 'A'; // Caracteres forma de declarar caracteres - ASCII no tiene signo

// TIPOS DE DATOS ESTANDARES

int8_t numero = -2; // Entero de 1 byte con signo
uint8_t numero2 = 25; // Entero de 8 bits sin signo

// Zona de función principal

int main()
{
    // Codigo a ejecutar por el programa

    for(int variableDeCuenta = 0 ; variableDeCuenta < 4 ; variableDeCuenta ++){
        printf("Hello World!\r\n");
    }

    printf("El valor de la variable datoA es: %i \r\n", datoA);
    printf("El valor de la temperatura es: %.1f \r\n", temperatura);
    printf("El valor de la variable presion es: %f \r\n", presion);
    printf("El valor del caracter es: %c \r\n", letra);

    /* CARACTERES DE CONVERSIÓN
     * %i -> para enteros - bools
     * %f -> para flotantes y dobles
     * %c -> para caracteres
     *
     * %.nf -> n numero de decimales requeridos -> redondea
     *
     * CARACTERES NO IMPRIMIBLES
     * \n -> salto de linea
     * \r -> retorno de carro
     */

    return 0;
}

// Zona para el desarrollo de funciones
