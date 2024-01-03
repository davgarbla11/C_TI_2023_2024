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

    int i, nPeliculas = 0, nSeries = 0;
    float porcentaje = 0, sumaSeries = 0, sumaPelis = 0, porcPromSer = 0, porcPromPel = 0;

    /* Porcentaje Pelicula y Series ind. */

    for (i = 0; i < numPelisSeries; i++) {

        porcentaje = ((matrizPelisSeries[i][1] * 100.0) / matrizPelisSeries[i][0]);
        printf("\n%s, porcentaje de visualizacion: %.2f%%", titulosPelisSeries[i], porcentaje); 

        if (matrizPelisSeries[i][3] == 1) {
            sumaPelis = sumaPelis + porcentaje;
            nPeliculas++;
        }

        if (matrizPelisSeries[i][3] == 2) {
            sumaSeries = sumaSeries + porcentaje;
            nSeries++;
        }
    
    }

    /* Porcentaje Pelicula y Series . */

    porcPromPel = sumaPelis / nPeliculas;
    porcPromSer = sumaSeries / nSeries;

    printf("\nEl porcentaje medio de avance en películas es %.2f%% y en series es %.2f%%.", porcPromPel, porcPromSer);


    return 0;
}