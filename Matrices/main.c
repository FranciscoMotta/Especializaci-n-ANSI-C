#include <stdio.h>

char ascii_ingresado;
char teclado_Matricial_4x4[4][4] = { {'1', '2', '3', 'A'},
                                     {'4', '5', '6', 'B'},
                                     {'7', '8', '9', 'C'},
                                     {'*', '0', '#', 'D'} };
char password_Usuario[4] = {'6','2','9','0'};
char password_Ingresada[4];

char tecla_Presionada (void);

int indexa = 0;


int main()
{
    int clave = 0;
    while (indexa++ < 4) {
     password_Ingresada[indexa] = tecla_Presionada();
    }

    for (indexa = 0 ; indexa < 4 ; indexa ++){
        if(password_Ingresada[indexa] == password_Usuario[indexa]){
            clave = clave + 1;
        } else {
        }
    }
    for(int cuenta = 0 ; cuenta < 4 ; cuenta ++){
        printf("%c\n", password_Ingresada[cuenta]);
    }
    printf("El valor de la clave es: %i\n", clave);
    if(clave == 4){
        printf("Bienvenido");
    } else {
        printf("Clave erronea");
    }
    printf("\n\n");
    return 0;
}

char tecla_Presionada (void){
    //CONTRASEÑA
    char tecla = 0;
    printf("Ingrese un numero de la clave: ");
    fflush(stdin);
    scanf("%c", &ascii_ingresado);
    switch (ascii_ingresado) {
    case 48:printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[3][1]);
        tecla = teclado_Matricial_4x4[3][1];
        break;
    case 49: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[0][0]);
        tecla = teclado_Matricial_4x4[0][0];
        break;
    case 50: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[0][1]);
        tecla = teclado_Matricial_4x4[0][1];
        break;
    case 51: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[0][2]);
        tecla = teclado_Matricial_4x4[0][2];
        break;
    case 52: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[1][0]);
        tecla = teclado_Matricial_4x4[1][0];
        break;
    case 53: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[1][1]);
        tecla = teclado_Matricial_4x4[1][1];
        break;
    case 54: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[1][2]);
        tecla = teclado_Matricial_4x4[1][2];
        break;
    case 55: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[2][0]);
        tecla = teclado_Matricial_4x4[2][0];
        break;
    case 56: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[2][1]);
        tecla = teclado_Matricial_4x4[2][1];
        break;
    case 57: printf("La tecla presionada es: %c \n", teclado_Matricial_4x4[2][2]);
        tecla = teclado_Matricial_4x4[2][2];
        break;
    }
    return tecla;
}
