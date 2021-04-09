/*TIP
 * VALORES MENORES A 256 -> 8 BITS
 * VALORES MAYORES A 255 Y MENORES A 65535 -> 16 BITS
*/

#include <stdio.h>
#include <stdint.h>

uint8_t PORTB = 0B00000000;

uint8_t estado_register_PORTD = 0;

#define MASK_BIT_0 0B000000001
#define MASK_BIT_1 0B000000010
#define MASK_BIT_2 0B000000100
#define MASK_BIT_3 0B000001000
#define MASK_BIT_4 0B000010000
#define MASK_BIT_5 0B000100000
#define MASK_BIT_6 0B001000000
#define MASK_BIT_7 0B010000000

#define pos_bit_7 7u

void ejemplos_Aplicacion (void);
void ejemplos_2 (void);

void clear_PORTB (uint8_t puerto);

uint8_t parte_Superior = 3;
uint8_t parte_Inferior = 5;

int main()
{
    PORTB = parte_Inferior & 0X0F;
    PORTB |= (parte_Superior << 4) & 0XF0;
    printf("valor: 0x%x\n", PORTB);
    printf("\n\n");
    return 0;
}

void ejemplos_2 (void){
    PORTB |= MASK_BIT_7; // Ponemos en 1 el bit 7 del registro
    /*
     * Es lo mismo a decir PORTB = PORTB | MASK_BIT7;
    */
    printf("El valor del puerto es: 0x%x\n", PORTB);

    //Limpieza del bit 7

    PORTB &= (~MASK_BIT_7);
    /*
     * Esto es lo mismo a decir PORTB = PORTB & (NOT (MASK_BIT_7))
    */
    printf("El valor del puerto es 0x%x\n", PORTB);

    printf("El nuevo valor es: 0x%x\n", PORTB &= (~MASK_BIT_7));

    // Desplazamientos

    //Encendemos el bit

    PORTB |= (1u << 7);

    printf("valor:0x%x\n", PORTB);

    PORTB = 0b10000000;

    printf("val: 0x%x\n", PORTB);

    clear_PORTB(pos_bit_7);

    printf("val: 0x%x\n", PORTB);
}

void ejemplos_Aplicacion (void){
    // Encendido de bits
    printf("El valor inicial de PORTB es: 0x%x \n", PORTB);
    PORTB = (PORTB | 0b00000001); // Encedemos el bit lsb
    printf("El valor actual de PORTB es: 0x%x \n", PORTB);
    PORTB = (PORTB | 0b10100000); // Encedemos todos los bits
    printf("El valor actual 2 de PORTB es: 0x%x \n", PORTB);
    PORTB = (PORTB & 0b01111110); // Apagamos todos los bits menos el MSB y el LSB
    printf("El valor actual 3 de PORTB es: 0x%x \n", PORTB);

    estado_register_PORTD = (PORTB & 0B00010000);
    printf("El valor del registro de estado es: 0x%x \n", estado_register_PORTD);

    if(estado_register_PORTD == 0x10){
        printf("El bit está en estado alto");
    } else{
        printf("El bit está en estado bajo");
    }

}

void clear_PORTB (uint8_t puerto){
    PORTB &= ~(1<< puerto);
}
