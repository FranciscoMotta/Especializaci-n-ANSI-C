// Zona de librerías

#include <stdio.h>
#include <stdint.h>

// Zona de declaraciones

// Zona de variables

uint8_t contador = 0; // Variable de cuenta del bucle

// Función principal
int main()
{
    while (contador < 10){
        printf("Hello World! number: %i \n", contador);
        contador -=-1;
    }
    return 0;
}
