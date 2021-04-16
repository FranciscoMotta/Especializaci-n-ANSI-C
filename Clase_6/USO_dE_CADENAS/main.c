#include <stdio.h>
#include <stdint.h>
#include <string.h>


char chainOne[] = "Lenguaje C - Estandar ANSI C C-99";
char password_usuario[] = "E#123ANSIC\n\0";
char password_ingresado[12];

char chainTwo[] = "Especialización en lenguaje C - Usando el estandar C99 - Marzo 2021";
char subchain[] = "Lenguaje C";

int main()
{
    printf("La longitud de chainOne: %llu \n", strlen(chainOne)); // llu -> unsigned long long
    printf("Ingrese su clave: ");
    fgets(password_ingresado, sizeof (password_ingresado), stdin);
    /*
     *  0 = strcmp(cadena1, cadena2); -> iguales
     *  0 != strcmp(cadena1, cadena2); -> diferentes
    */
    if(strcmp(password_ingresado, password_usuario) == 0){
        printf("La clave es correcta :D");
    } else {
        printf("No puedes ingresar al sistema");
        printf("No es la clave: %s", password_ingresado);
    }

    if(strstr(chainOne, subchain) != NULL){
        printf("Subcadena está en la cadena");
    } else {
        printf("No se encuentra");
        }
    printf("\n\n");
    return 0;
}
