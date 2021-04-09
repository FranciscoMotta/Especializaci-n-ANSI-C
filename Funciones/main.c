/*PARA EL USO DE LAS FUNCIONES EN C, SEGUIR LAS SIGUIENTES FUNCIONES
 * PASO 1: DECLARAR EL PROTOTIPO DE LA FUNCION
 * PASO 2: REALIZAR EL DESARROLLO DE LA FUNCION
 * PASO 3: LLAMADA DE LA FUNCION
*/

// Zona de librerías

#include <stdio.h>
#include <stdint.h>

// Zona de definiciones

// Zona de variables

uint8_t a, b = 0;
int A, B;
// Zona de prototipo de funciones

void Sumar(void);
void Multiplicar(int datoA, int datoB);
float Dividir(void);
int Resto(void);
int Potencia_numero (int base , int exponente);
// Función principal

int main()
{
    // Zona de llamada de las funciones
    printf("Primera funcion: \n");
    Sumar();
    printf("Ingese el primer número: ");
    scanf("%i", &A);
    printf("Ingrese el segundo número: ");
    scanf("%i", &B);
    Multiplicar(A,B);
    printf("El resultado de A/B es: %.2f \n", Dividir());
    printf("El resto de A/B es: %i \n", Resto());
    printf("El resultado de la eponencial es: %i \n", Potencia_numero(2,10));
    return 0;
}

// Zona para el desarrollo de las funciones
void Sumar (void){
    a = 10;
    b = 10;
    printf("La suma es: %i \n", a + b);
}

void Multiplicar(int datoA, int datoB){
    int DatoR = datoA * datoB;
    printf("la multiplicacion es: %i\n", DatoR);
}

float Dividir(void){
    /*Operar 2 variables de igual tipo, retorna una variable del tipo de ambas*/
    float res_div;
    res_div = ((float)(A / B));
    return res_div;
}

int Resto(void) {
    int res_mod = A % B;
    return res_mod;
}

int Potencia_numero (int base , int exponente){
    int counter = 1;
    for(int contador = 1 ; (contador <= exponente) ; contador ++){
        counter = counter * base;
    }
    return counter;
}
