#include <stdio.h>
#include <string.h>
#define MAX_PLAT 100
#define MAX_CAR 100
#define MAX_PELIS 100
#define TAM 50

int visPorCompleto(int matrizPelisSeries[MAX_PELIS][6], int numPelisSeries, int critUser, int indPelOSer[]);

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

    /* Variables ejercicio */

    int i, critUser, cont = 0;
    int indPelOSer[TAM];


    /* Ejercicio */
    printf("Introduzca que desea buscar peliculas (1) o series (2): ");
    scanf("%d", &critUser);

    cont = visPorCompleto(matrizPelisSeries, numPelisSeries, critUser, indPelOSer);

    if (cont == numPelisSeries--) {

        printf("No se han encontrado resultados\n");

    } else {

        if (critUser == 1) {

            printf("Las peliculas visualizadas por completo son: \n");

            for (i = 0; i < numPelisSeries; i++) {

                if (matrizPelisSeries[i][0] == matrizPelisSeries[i][1] && indPelOSer[i] == i) {

                    printf("%s, de %s\n", titulosPelisSeries[i], plataformas[matrizPelisSeries[i][2]]);
                }

            }

        } else if (critUser == 2) {

            printf("Las series visualizadas por completo son: \n");

            for (i = 0; i < numPelisSeries; i++) {

                if (matrizPelisSeries[i][0] == matrizPelisSeries[i][1] && indPelOSer[i] == i) {

                    printf("%s, de %s\n", titulosPelisSeries[i], plataformas[matrizPelisSeries[i][2]]);
                }
                
            }

        }   

    }

    return 0;
}

int visPorCompleto(int matrizPelisSeries[MAX_PELIS][6], int numPelisSeries, int critUser, int indPelOSer[]) {
    
    int i, cont = 0;

    if (critUser == 1) {
        
        for (i = 0; i < numPelisSeries; i++) {
            
            if (matrizPelisSeries[i][3] == critUser && matrizPelisSeries[i][1] == matrizPelisSeries[i][0]) {

                indPelOSer[i] = i;

            } else {

                cont++;
            }

        }

    } else if (critUser == 2) {

        for (i = 0; i < numPelisSeries; i++) {

            if (matrizPelisSeries[i][3] == critUser && matrizPelisSeries[i][1] == matrizPelisSeries[i][0]) {

                indPelOSer[i] = i;

            } else {

                cont++;

            }

        }

    }

    return cont;

}