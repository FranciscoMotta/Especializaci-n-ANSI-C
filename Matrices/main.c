#include <stdio.h>

char ascii_ingresado;
char teclado_Matricial_4x4[4][4] = { {'1', '2', '3', 'A'},
                                     {'4', '5', '6', 'B'},
                                     {'7', '8', '9', 'C'},
                                     {'*', '0', '#', 'D'} };
char password_Usuario[4] = {'6', '2','9','0'};
char password_Ingresada[4];

char tecla_Presionada (void);

int main()
{
    printf("\n\n");
    return 0;
}

char tecla_Presionada (void){
    //CONTRASEÑA
    char tecla;
    printf("Ingrese un numero de la clave: ");
    scanf("%c", &ascii_ingresado);

    switch (ascii_ingresado) {
        case 48:
            printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[3][1]);
            tecla = teclado_Matricial_4x4[3][1];
        break;
        case 49: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[0][0]);
        break;
        case 50: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[0][1]);
        break;
        case 51: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[0][2]);
        break;
        case 52: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[1][0]);
        break;
        case 53: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[1][1]);
        break;
        case 54: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[1][2]);
        break;
        case 55: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[2][0]);
        break;
        case 56: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[2][1]);
        break;
        case 57: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[2][2]);
        break;
        default:
        printf("Tecla equivocada");
    }
}
