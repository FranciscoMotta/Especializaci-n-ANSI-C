/*
 * Funciones de arduino
 *
 * pinMode(nro_pin, mode_pin);
 * digitalWrite(nro_pin, state_pin);
 * var = digitalRead(nro_pin);
 * serial_begin(baud_Rate);
 *
*/

#include <stdio.h>
#include <stdbool.h>

#define INPUT 0
#define OUTPUT 1
#define LOW 0
#define HIGH 1

void pinMode(int nro_pin, bool mode_pin);
void digitalWrite(int nro_pin, bool state_pin);
bool digitalRead(int nro_pin);
void serial_begin(long baudios);

int main()
{

    return 0;
}

// Desarrollo de las funciones

void pinMode(int nro_pin, bool mode_pin){
    if(mode_pin == INPUT){
    //Interacción con el hardware
        printf("El pin %i es una entrada: \n", nro_pin);
    } else {
        printf("El pin %i es una salida: \n", nro_pin);
    }
}
void digitalWrite(int nro_pin, bool state_pin){
    if(state_pin == HIGH){
        printf("El pin %i es está en ALTO: \n", nro_pin);
    } else {
        printf("El pin %i es está en BAJO: \n", nro_pin);
    }
}
void serial_begin(long baudios){
    printf("La velocidad en baudios es: %lu \n", baudios);
}
