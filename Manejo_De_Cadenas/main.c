#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Terminan en \0
char nombre[12] = "Julio Motta";
int count = 0;
char name[20];
char nam[20];
int main()
{
    while (nombre[count]!='\0') {
        printf("%c", nombre[count]);
        count++;
    }

    printf("\n\n");

    //printf("Ingrese nombre: ");
    //scanf("%s", name);

    //printf("Su nombre es: %s \n\n", name); // Deficiente hasta que encuentre un espacio
    printf("Ingrese el nombre: ");
    fgets(nam, 20, stdin); // Variable, Número max de caracteres, standart
    printf("Su nombre es: %s", nam);



    printf("\n\n");
    return 0;
}
