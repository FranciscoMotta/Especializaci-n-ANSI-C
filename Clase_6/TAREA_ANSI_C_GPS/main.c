//DESARROLLO DE LA TAREA DE DECODIFICACIÓN DE TRAMAS NMEA

#include <stdio.h>
#include <stdint.h>

//CADENAS DE DATOS DE GPS NMEA

char NMEA_RMC_GPS[] = "$GPRMC,123519,A,4807.038,N,01131.000,E,022.4,084.4,230394,003.1,W*43";

char NMEA_BWC_GPS[] = "$GPBWC,225444,4917.24,N,12309.57,W,051.9,T,031.6,M,001.3,N,004*29";

char NMEA_GSA_GPS[] = "$GPGSV,3,1,10,78,331,45,01,235,47,22,41,069,-,13,32,252,45*70";

//DATOS DE RMC

char NMEA_RMC_HEAD[10]; //Recommended Minimum sentence C
char NMEA_RMC_TIME[10]; //Fix taken at 12:35:19 UTC
char NMEA_RMC_FIX[2]; // Status A=active or V=Void.
char NMEA_RMC_LAT[10]; // Latitud
char NMEA_RMC_N_S[2]; // Norte o Sur
char NMEA_RMC_LONG[2]; // Longitud
char NMEA_RMC_E_O[2]; // ESTE - OESTE
char NMEA_RMC_SPEED[10]; //Speed over the ground in knots
char NMEA_RMC_TRACK[10]; //Track angle in degrees True
char NMEA_RMC_FECHA[10]; //Date - 23rd of March 1994
char NMEA_RMC_MAGNE[5]; //Magnetic Variation


//DATOS DE BWC

char NMEA_BWC_HEAD[10]; //Recommended Minimum sentence C
char NMEA_BWC_TIME_FIX[10]; //Fix taken at 12:35:19 UTC
char NMEA_BWC_LAT[10]; // Latitud
char NMEA_BWC_N_S[2]; // Norte o Sur
char NMEA_BWC_LONG[10]; // Longitud
char NMEA_BWC_E_O[10]; // ESTE - OESTE
char NMEA_BWC_DEGREES_TRUE[10]; //Bearing to waypoint, degrees true
char NMEA_BWC_TRUE[10];
char NMEA_BWC_DEGREES_MAGNETIC[10]; //Bearing to waypoint, degrees magnetic
char NMEA_BWC_MAGNETIC[10];
char NMEA_BWC_NAUTICAL[10]; //Bearing to waypoint, degrees miles
char NMEA_BWC_NAUT[10];
char NMEA_BWC_WAIT_POINT[10]; //Magnetic Variation


//DATOS DE GSA

char NMEA_GSA_HEAD[10]; //Recommended Minimum sentence C
char NMEA_GSA_NUMERO_MESANJES[10]; //NÚMERO DE MENSAJES
char NMEA_GSA_NUMERO_SECUENCIA[10]; // Número de secuencia de entrada
char NMEA_GSA_NUMERO_SATELITES[2]; // NUMERO DE SATELIRES A LA VISTA
char NMEA_GSA_SATE_ID_1[10]; // Identificador de satélite 1
char NMEA_BWC_SAT1_ELEV[10]; // Elevación satélite 1
char NMEA_BWC_SAT1_DEGREES[10]; //Grados satélite
char NMEA_BWC_SNR_SAT1[10]; //Relación señal ruido
char NMEA_BWC_SATE_ID_2[10]; //Identificador satélite 2
char NMEA_BWC_SAT2_ELEV[10]; //Elevación satelite 2
char NMEA_BWC_SAT2_DEGREES[10]; //Grados satélite
char NMEA_BWC_SNR_SAT2[10]; //Relación señal ruido sat2
char NMEA_BWC_SATE_ID_3[10]; //Identificador satélite 3
char NMEA_BWC_SAT3_ELEV[10]; //Elevación satelite 3
char NMEA_BWC_SAT3_DEGREES[10]; //Bearing to waypoint, degrees miles
char NMEA_BWC_SNR_SAT3[10]; //Relación señal ruido sat3
char NMEA_BWC_SATE_ID_4[10]; //Identificador satélite 4
char NMEA_BWC_SAT4_ELEV[10]; //Elevación satelite 4
char NMEA_BWC_SAT4_DEGREES[10]; //Bearing to waypoint, degrees miles
char NMEA_BWC_SNR_SAT4[10]; //Relación señal ruido sat4



// CONTADORES E INDICES DE LAS TRAMAS

int index_componente = -1;
int index_frame = -1;

// FUNCIONES PRINCIPALES

void Sentencia_GPS_RCM_TRAMA (void);

void Sentencia_GPS_BWC_TRAMA (void);

void Sentencia_GPS_GSA_TRAMA (void);

// FUNCIONES SECUNDARIAS

void Restablecer_Valores_Indices (void);

int main()
{
    Sentencia_GPS_RCM_TRAMA(); // PRIMERA TRAMA CON SENTENCIA RCM
    Restablecer_Valores_Indices();
    Sentencia_GPS_BWC_TRAMA(); // SEGUNDA TRAMA CON SENTENCIA BWC
    Restablecer_Valores_Indices();
    printf("\n\n");
    return 0;
}

void Restablecer_Valores_Indices (void){
    index_componente = -1;
    index_frame = -1;
}

void Sentencia_GPS_BWC_TRAMA (void){

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_HEAD[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_TIME_FIX[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_LAT[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_N_S[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_LONG[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_E_O[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_DEGREES_TRUE[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_TRUE[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_DEGREES_MAGNETIC[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_MAGNETIC[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_NAUTICAL[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_NAUT[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != '*') {
        NMEA_BWC_WAIT_POINT[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("SENTENCIA DE DECODIFICACION:  %s\n", NMEA_BWC_HEAD);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("HORA FIX: %s\n", NMEA_BWC_TIME_FIX);
    printf("DATOS RECIBIDOS CORRECTAMENTE FIX");
    printf("LATITUD: %s\n", NMEA_BWC_LAT);
    printf("NORTE O SUR: %s\n", NMEA_BWC_N_S);
    printf("LONGITUD: %s\n", NMEA_BWC_LONG);
    printf("ESTE U OESTE: %s\n", NMEA_BWC_E_O);
    printf("GRADOS DEPRESION: %s , TRUE/FALSE : %s\n", NMEA_BWC_DEGREES_TRUE, NMEA_BWC_TRUE);
    printf("GRADOS CAMPO MAGNETICO: %s\n , CAMPO MAGN: %s\n", NMEA_BWC_DEGREES_MAGNETIC, NMEA_BWC_MAGNETIC);
    printf("MILLAS NAUTICAS: %s , NAUTICAL %s\n", NMEA_BWC_NAUTICAL, NMEA_BWC_NAUT);
    printf("WAYPOINT ID: %s\n", NMEA_BWC_WAIT_POINT);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

void Sentencia_GPS_RCM_TRAMA (void){
    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_HEAD[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }

    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_TIME[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_FIX[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_LAT[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_N_S[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_LONG[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_E_O[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_SPEED[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_TRACK[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_FECHA[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_RMC_GPS[index_frame += 1] != ',') {
        NMEA_RMC_MAGNE[index_componente-=-1] = NMEA_RMC_GPS[index_frame];
    }
    index_componente = -1;

    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("SENTENCIA DE DECODIFICACION:  %s\n", NMEA_RMC_HEAD);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("HORA: %s FECHA: %s\n", NMEA_RMC_TIME, NMEA_RMC_FECHA);
    printf("DATOS RECIBIDOS CORRECTAMENTE FIX: %s\n", NMEA_RMC_FIX);
    printf("LATITUD: %s\n", NMEA_RMC_LAT);
    printf("NORTE O SUR: %s\n", NMEA_RMC_N_S);
    printf("LONGITUD: %s\n", NMEA_RMC_LONG);
    printf("ESTE U OESTE: %s\n", NMEA_RMC_E_O);
    printf("VELOCIDAD: %s\n", NMEA_RMC_SPEED);
    printf("TRACKEO DE ANGULO: %s\n", NMEA_RMC_TRACK);
    printf("MAGNETIC VARIATION: %s\n", NMEA_RMC_MAGNE);
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
}

void Sentencia_GPS_GSA_TRAMA (void){

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_HEAD[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_TIME_FIX[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_LAT[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_N_S[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_LONG[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_E_O[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_DEGREES_TRUE[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_TRUE[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_DEGREES_MAGNETIC[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_MAGNETIC[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_NAUTICAL[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != ',') {
        NMEA_BWC_NAUT[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    while (NMEA_BWC_GPS[index_frame += 1] != '*') {
        NMEA_BWC_WAIT_POINT[index_componente-=-1] = NMEA_BWC_GPS[index_frame];
    }
    index_componente = -1;

    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("SENTENCIA DE DECODIFICACION:  %s\n", NMEA_BWC_HEAD);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("HORA FIX: %s\n", NMEA_BWC_TIME_FIX);
    printf("DATOS RECIBIDOS CORRECTAMENTE FIX");
    printf("LATITUD: %s\n", NMEA_BWC_LAT);
    printf("NORTE O SUR: %s\n", NMEA_BWC_N_S);
    printf("LONGITUD: %s\n", NMEA_BWC_LONG);
    printf("ESTE U OESTE: %s\n", NMEA_BWC_E_O);
    printf("GRADOS DEPRESION: %s , TRUE/FALSE : %s\n", NMEA_BWC_DEGREES_TRUE, NMEA_BWC_TRUE);
    printf("GRADOS CAMPO MAGNETICO: %s\n , CAMPO MAGN: %s\n", NMEA_BWC_DEGREES_MAGNETIC, NMEA_BWC_MAGNETIC);
    printf("MILLAS NAUTICAS: %s , NAUTICAL %s\n", NMEA_BWC_NAUTICAL, NMEA_BWC_NAUT);
    printf("WAYPOINT ID: %s\n", NMEA_BWC_WAIT_POINT);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

}
