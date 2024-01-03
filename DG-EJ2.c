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

    /* Elementos proporcionados por el usuario */

    printf("Introduzca el nombre de la pelicula o serie: ");
    gets(titulosPelisSeries[numPelisSeries]);
    printf("Introduzca duracion: ");
    scanf("%d", &matrizPelisSeries[numPelisSeries][0]);
    printf("Introduzca plataforma: ");
    scanf("%d", &matrizPelisSeries[numPelisSeries][2]);
    printf("Introduzca tipo pelicula (1) o series (2): ");
    scanf("%d", &matrizPelisSeries[numPelisSeries][3]);
         

    /* Valor para actual */

    matrizPelisSeries[numPelisSeries][1] = 0;

    /* Compruebo si estamos ante una peli o serie para dar valor a las columnas temporada y capítulo */
    
    if (matrizPelisSeries[numPelisSeries][3] == 1) {
        /* Actualizacion columnas temporada capitulo si estamos ante una película */
        
        matrizPelisSeries[numPelisSeries][4] = -1;
        matrizPelisSeries[numPelisSeries][5] = -1;
        printf("Pelicula añadida correctamente.\n");
    }

    if (matrizPelisSeries[numPelisSeries][3] == 2) {
        /* Actualizacion columnas temporada capitulo si estamos ante una serie */
        matrizPelisSeries[numPelisSeries][4] = 0;
        matrizPelisSeries[numPelisSeries][5] = 0;
        printf("Serie añadida correctamente.\n");

    } 

    /* Actualización de cantidad de películas y series */

    numPelisSeries++;

    return 0;
}