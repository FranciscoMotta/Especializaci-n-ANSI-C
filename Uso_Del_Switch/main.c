// Zona de librerías

#include <stdio.h>
#include <stdint.h>

// Zona de deficiones

#define offset 0.34

// Zona de declaración de variables

int dato_Ingresado = 0;
float temperatura = 0.0;

// Función principal

int main()
{
//    printf("Ingrese un dato: ");
//    // Primer parámetro = tipo de dato , segundo parámetro = &nombre de la variable
//    scanf("%i", &dato_Ingresado);
//    printf("El valor ingresado es: %i\n", dato_Ingresado);

//    printf("Ingrese la temperatura: ");
//    scanf("%f", &temperatura);
//    printf("La temperatura es: %f", temperatura);

//    temperatura = temperatura + offset; // No poner valores crudos

//    printf("La temperatura compensada es: %f", temperatura);

    printf("Ingrese en numero del dia de la semana 1-7: ");
    scanf("%i", &dato_Ingresado);

    switch (dato_Ingresado) {
    case 1:
        printf("Elegiste el dia lunes");
        break;
    case 2:
        printf("Elegiste el dia martes");
        break;
    case 3:
        printf("Elegiste el dia miercoles");
        break;
    case 4:
        printf("Elegiste el dia Jueves");
        break;
    case 5:
        printf("Elegiste el dia Viernes");
        break;
    case 6:
        printf("Elegiste el dia Sábado");
        break;
    case 7:
        printf("Elegiste el dia Domingo");
        break;
    default: printf("Eleccion equivocada");
    }
    printf("\n\n");
    return 0;
}
