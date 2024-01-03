#include <stdio.h>
#include <string.h>
#define MAX_PLAT 100
#define MAX_CAR 100
#define MAX_PELIS 100

int main() {

    /* Declaración Variables Enunciado */

    char plataformas[MAX_PLAT][MAX_CAR] = {"Netflix", "Prime Video", "HBO", "AppleTV+", "Disney+"};
    int numPlataformas = 5, numPelisSeries = 6;
    char titulosPelisSeries[MAX_PELIS][MAX_CAR] = {"Upload", "In Time", "Black Mirror", "Finch", "Fundacion", "Dune"};
    int matrizPelisSeries[MAX_PELIS][6] = 
    {
        {32, 0, 1, 2, 2, 1},
        {109, 25, 0, 1, -1, -1},
        {63, 63, 0, 2, 3, 1},
        {115, 0, 3, 1, -1, -1},
        {49, 49, 3, 2, 2, 1},
        {155, 130, 2, 1, -1, -1}

    };

    /* Declaración Variables Ejercicio */
    
    int tiempoUsr, i, tiempoRes;

    
    /* Ejercicio */

    printf("Introduzca los minutos que dispones para ver peliculas y series: ");

    scanf("%d", &tiempoUsr);

    printf("Puedes terminar de ver: \n");

    for (i = 0; i < numPelisSeries; i++) {

        tiempoRes = matrizPelisSeries[i][0] - matrizPelisSeries[i][1];

        if (tiempoRes != 0 && tiempoRes <= tiempoUsr) {

            printf("%s, faltan %d minutos por ver.\n", titulosPelisSeries[i], tiempoRes);

        }   

    }

    return 0;
}