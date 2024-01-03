#include <stdio.h>
#include <string.h>
#define MAX_PLAT 100
#define MAX_CAR 100
#define MAX_PELIS 100
#define TAM 50

int busquedaPeliCat(int matrizPelisSeries[MAX_PELIS][6], char catBusqueda[], int numPelisSeries, char categorias[MAX_PELIS][MAX_CAR]);

int main() {

    /* Declaración Variables Enunciado */

    char plataformas[MAX_PLAT][MAX_CAR] = {"Netflix", "Prime Video", "HBO", "AppleTV+", "Disney+"};
    int i, j, numPlataformas = 5, numPelisSeries = 6;
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
    /* Variables Ejercicio */

    int nfil;
    char categorias[MAX_PELIS][MAX_CAR] = {"Accion", "Thriller", "Drama", "Thriller", "Accion", "Thriller"};
    char catBusqueda[TAM];
    
    /* Ejercicio */


    printf("Introduzca la categoria a buscar: ");
    gets(catBusqueda);

    nfil = busquedaPeliCat(matrizPelisSeries, catBusqueda, numPelisSeries, categorias);

    if (matrizPelisSeries[nfil][3] == 1 && nfil != -1) {

        printf("\nLa pelicula de %s llamada %s, se ha visualizado por completo.", catBusqueda, titulosPelisSeries[nfil]);

    } else if (matrizPelisSeries[nfil][3] == 2 && nfil != -1) {

        printf("La serie de %s llamada %s, se ha visualizado por completo.\n", catBusqueda, titulosPelisSeries[nfil]);

    } else if (nfil == -1) {

        printf("No se han encontrado resultados.\n");

    }
         
    return 0;

}

int busquedaPeliCat(int matrizPelisSeries[MAX_PELIS][6], char catBusqueda[], int numPelisSeries, char categorias[MAX_PELIS][MAX_CAR]) {

    int i = 0, exito = 0,conterror = 0, nfil, temp;

    while (!exito && i <= numPelisSeries) {

        temp = strcmp(catBusqueda, categorias[i]);
        
        if (matrizPelisSeries[i][0] == matrizPelisSeries[i][1] && temp == 0) {

            exito = 1;
            nfil = i;
   
        } else {

            i++;
            conterror++;

        }
   
    }

    /* Con esta parte compruebo si no hay resultados, en el caso de que no haya devuelvo -1 */

    if (conterror > numPelisSeries) {

        nfil = -1;

    }

    return nfil;

}