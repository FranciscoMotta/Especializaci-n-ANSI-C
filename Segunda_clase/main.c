// Zona de librerías

#include <stdio.h>
#include <stdint.h>

// zona de declaración de variables

// Desperdicio de memoria => int prod = 200; int = 2^32-1
// Forma correcta uint8_t productor = 200; -> uint8_t = 2^8-1 = 255 max

uint16_t datoA = 20;
uint16_t datoB = 10;
uint16_t Resultado = 0;

uint8_t edad = 19;
uint64_t dni = 75625765;

unsigned char sexo = 'M';
// Buena práctica dar valor de 0 a variables que no tengamos interes del valor inicializado
// para evitar que el compilador le dé un valor aleatorio

// Función principal

int main()
{
//    Resultado = datoA + datoB;
//    printf("El resultado de + es: %i\n", Resultado);

//    Resultado = datoA - datoB;
//    printf("El resultado de - es: %i\n", Resultado);

//    Resultado = datoA * datoB;
//    printf("El resultado de * es: %i\n", Resultado);

//    Resultado = datoA / datoB;
//    printf("El resultado de / es: %i\n", Resultado);

//    Resultado = (datoA + 1) % datoB;
//    printf("El resultado es: %i\n", Resultado);

//    Resultado ++;
//    printf("incremento: %i", Resultado);


    /*SENTENCIAS DE CONTROL
     * if(expresión){
     *    statement1;
     *    statement2;
     * }
*/
    if(edad >= 18){
        printf("Eres mayor de edad\n");
    } else {
        printf("No eres mayor de edad\n");
    }

    if(dni == 75625765){
        printf("Es correcto\n");
    } else {
        printf("No es correcto\n");
    }

    if((sexo == 'M') && (edad >= 18)){
        printf("Eres mayor de edad y de sexo masculino");
    } else {
        printf("No se cumple las condiciones\n");
    }

    printf("\n\n\n");
    return 0;
}

/*TIP DE PROGRAMACIÓN:
 * EN LA PROGRAMACIÓN EN C, LAS INSTRUCCIONES SON EJECUTADAS SECUENCIALMENTE
*/
