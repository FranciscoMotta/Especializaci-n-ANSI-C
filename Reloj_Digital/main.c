
/*SIMULAR UN RELOJ DIGITAL EL CUAL CONTARÁ CON LO SIGUENTE
 *SE IMPRIMIRÁ "RELOJ DIGITAL"
 *H:00  M:00  S:00
*/

// Zona de librerías

#include <stdio.h>
#include <stdint.h>
#include <windows.h>
#include <inttypes.h>

// Zona de definiciones


// Zona de variables

int horas, minutos, segundos;
int temp_horas, temp_min, temp_seg;

// Función principal
int main()
{
    printf(" \t\t\t >> RELOJ DIGITAL << \n");
    //implementar reloj
    /*
     * \r retorno de carro, regresa a la misma línea
     * \t hace una tabulación
    */
    printf("Ingrese las horas: ");
    scanf("%i", &temp_horas);

    printf("Ingrese las minutos: ");
    scanf("%i", &temp_min);

    printf("Ingrese las segundos: ");
    scanf("%i", &temp_seg);
    while(1){
        for(horas = temp_horas; (horas < 24) ; horas++){
            for(minutos = temp_min ; (minutos < 60) ; minutos++){
                for(segundos = temp_seg; (segundos < 60); segundos ++){
                    printf(" \t\t\t H: %02i  M: %02i  S: %02i \r",horas, minutos, segundos);
                    Sleep(10); // Retardo por software
                    temp_seg = 0;
                }
                temp_min = 0;
            }
            temp_horas = 0;
        }
    }
    printf("\n\n");
    return 0;
}
