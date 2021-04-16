// TRAMA NMEA - PARA REGISTRO DE DATOS POR GPS GGA Y RMC

#include <stdio.h>
#include <stdint.h>

char GPS_NMEA[]="$GPGGA,123519,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*42"; // Datos de la trama NMEA GGA

char NMEA_Header[20]; // Cabecera
char NMEA_TIEMPO_UTC[20]; // Tiempo formato UTC
char NMEA_Latitud[20];
char NMEA_NORTE_SUR[2];
char NMEA_Longitud[20];
char NMEA_ESTE_OESTE[2];
char NMEA_FIX[2];
char NMEA_Satelites[12];

int indexa_comp = -1;
int indexa_frame = -1;

int main()
{
    //Recorrido y guardado de los datos de cabecera de la trama NMEA

    while(GPS_NMEA[++indexa_frame] != ','){
        NMEA_Header[++indexa_comp] = GPS_NMEA[indexa_frame];
    }

    indexa_comp = -1;

    while(GPS_NMEA[++indexa_frame] != ','){
        NMEA_TIEMPO_UTC[++indexa_comp] = GPS_NMEA[indexa_frame];
    }

    indexa_comp = -1;

    while(GPS_NMEA[++indexa_frame] != ','){
        NMEA_Latitud[++indexa_comp] = GPS_NMEA[indexa_frame];
    }

    indexa_comp = -1;

    while(GPS_NMEA[++indexa_frame] != ','){
        NMEA_NORTE_SUR[++indexa_comp] = GPS_NMEA[indexa_frame];
    }

    indexa_comp = -1;

    while(GPS_NMEA[++indexa_frame] != ','){
        NMEA_Longitud[++indexa_comp] = GPS_NMEA[indexa_frame];
    }

    indexa_comp = -1;

    while(GPS_NMEA[++indexa_frame] != ','){
        NMEA_ESTE_OESTE[++indexa_comp] = GPS_NMEA[indexa_frame];
    }

    indexa_comp = -1;

    while(GPS_NMEA[++indexa_frame] != ','){
        NMEA_FIX[++indexa_comp] = GPS_NMEA[indexa_frame];
    }


    //USO DE LOS DATOS -_- DE LA TRAMA NMEA
    if(NMEA_FIX[0] == '1'){
        printf("NMEA Header:         %s\n", NMEA_Header);
        printf("NMEA Tiempo UTC:     %s\n", NMEA_TIEMPO_UTC);
        printf("NMEA Latitud:        %s\n", NMEA_Latitud);
        printf("NMEA N/S:            %s\n", NMEA_NORTE_SUR);
        printf("NMEA Longitud:       %s\n", NMEA_Longitud);
        printf("NMEA E/O:            %s\n", NMEA_ESTE_OESTE);
        printf("NMEA FIX:            %s\n", NMEA_FIX);
    } else {
        printf("DATA FIX = 0, ERROR DATOS GPS");
    }
    printf("\n\n\n");
    return 0;
}
