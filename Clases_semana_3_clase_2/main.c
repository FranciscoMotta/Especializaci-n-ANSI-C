// REPASO ARREGLOS

#include <stdio.h>
#include <stdint.h>

float muestras[10] = {2.1,2.9,2.0,3.1,3.5,2.6,2.8,2.1,3.7,2.3}; // Guardamos 100 valores de las muestras
float promedio = 0.0;

float notas[10];

void ejemplo_1 (void);
void ejemplo_2 (void);

char ascii_ingresado;

char teclado_Matricial_4x4[4][4] = {'1', '2', '3', 'A',
                                    '4', '5', '6', 'B',
                                    '7', '8', '9', 'C',
                                    '*', '0', '#', 'D'};
int main()
{
    //EJEMPLO 3
    printf("Ingrese un numero en el teclado");
    scanf("%c", &ascii_ingresado);

    printf("El codigo ascii es: %c", ascii_ingresado);

    printf("\n\n");
    return 0;
}

void ejemplo_1 (void){
    for(int index = 0 ; index < 10 ; index -=-1){
        promedio += muestras[index]/10;
    }
    printf("El promedio de los voltajes es: %.2f \n", promedio);
}

void ejemplo_2 (void){
    int contador = 0;
    while(contador < 10){
        printf("Indique la nota del estudiante: ");
        scanf("%f", &notas[contador]);
        contador++;
    }

    for(int indice = 0 ; indice < 10 ; indice++){
        promedio += notas[indice]/10;
    }
    printf("El promedio de las notas es: %.2f\n", promedio);
}
