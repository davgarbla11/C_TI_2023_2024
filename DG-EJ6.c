#include <stdio.h>
#include <string.h>
#define MAX_PLAT 100
#define MAX_CAR 100
#define MAX_PELIS 100
#define TAM 50

void calcPlatMayor(int matrizPelisSeries[MAX_PELIS][6], int numPelisSeries, char plataformas[MAX_PLAT][MAX_CAR], char plat[TAM]);


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

    char plataforma[TAM];

    calcPlatMayor(matrizPelisSeries, numPelisSeries, plataformas, plataforma);
    
    printf("La plataforma con mayor cantidad de peliculas y series es: %s\n", plataforma);

    

    return 0;
}


/* Funcion para calcular la plataforma con mayor cantidad de pelis o series. */

void calcPlatMayor(int matrizPelisSeries[MAX_PELIS][6], int numPelisSeries, char plataformas[MAX_PLAT][MAX_CAR], char plat[TAM]) {

    int i, j, cont = 0, k = 0, numdemoda;
    
    for (i = 0 ; i < numPelisSeries; i++) {
        
        cont = 0;  
                             
        for(j = 0; j < numPelisSeries; j++) {
            
            if(matrizPelisSeries[j][2] == matrizPelisSeries[i][2]) {  

                cont++;

            }
        }
        
        if(cont > k) {   

            numdemoda = matrizPelisSeries[i][2];         
            k = cont;

        }

    }

    strcpy(plat, plataformas[numdemoda]);    

}