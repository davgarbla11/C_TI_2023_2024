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

    /* Ejercicio */
 
    printf("Introduzca el nombre de una plataforma: \n");
    gets(plataformas[numPlataformas]);
    numPlataformas++;
    printf("Plataforma introducida correctamente. \n");

    

    return 0;
}