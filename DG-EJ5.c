#include <stdio.h>
#include <string.h>
#define MAX_PLAT 100
#define MAX_CAR 100
#define MAX_PELIS 100

int indicePelSer(int matrizPelisSeries[MAX_PELIS][6], int numPelisSeries, int peliserie);

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

    /* Declaración Variables enunciado */

    int critUsr, indPrograma, nplat;
    float porcentaje = 0;

    /* Ejercicio */
 
    printf("Indique si desea encontrar una película (1) o una serie (2): ");
    scanf("%d", &critUsr);

    /* Valores finales */   
    indPrograma = indicePelSer(matrizPelisSeries, numPelisSeries, critUsr);
    porcentaje = ((matrizPelisSeries[indPrograma][1] * 100.0) / matrizPelisSeries[indPrograma][0]);
    nplat = matrizPelisSeries[indPrograma][2];

    if (critUsr == 1) {

        if (matrizPelisSeries[indPrograma][1] == 0 || matrizPelisSeries[indPrograma][1] == matrizPelisSeries[indPrograma][0]) {

            printf("No se han encontrado resultados.\n");

        } else {

            printf("La pelicula con mayor progreso de visualizacion es: %s, visualizada al %2.f%% en %s\n", titulosPelisSeries[indPrograma], porcentaje, plataformas[nplat]);

        }

        

    } 
    
    if (critUsr == 2) {

        if (matrizPelisSeries[indPrograma][1] == 0 || matrizPelisSeries[indPrograma][1] == matrizPelisSeries[indPrograma][0]) {

            printf("No se han encontrado resultados.\n");

        } else {

            printf("La serie con mayor progreso de visualizacion es: %s, visualizada al %2.f%% en %s\n", titulosPelisSeries[indPrograma], porcentaje, plataformas[nplat]);
        
        }

    }

    
    

    return 0;

}

int indicePelSer(int matrizPelisSeries[MAX_PELIS][6], int numPelisSeries, int peliserie) {

    int i, nfil = 0;
    float porcentaje, porcentaje2 = 0;

    if (peliserie == 1) {

        for (i = 0; i < numPelisSeries; i++) {

            porcentaje2 = ((matrizPelisSeries[nfil][1] * 100.0) / matrizPelisSeries[nfil][0]);
            porcentaje = ((matrizPelisSeries[i][1] * 100.0) / matrizPelisSeries[i][0]);

                

            if (porcentaje >= porcentaje2 && porcentaje != 1.0 && matrizPelisSeries[i][3] == 1 && porcentaje != 0) {
                    
                nfil = i;
                
            } else {

                nfil = nfil;
            }

        } 

    } else if (peliserie == 2) {
        
        nfil = 0;

        for (i = 0; i < numPelisSeries; i++) {

            porcentaje2 = matrizPelisSeries[nfil][1] / matrizPelisSeries[nfil][0];
            porcentaje = matrizPelisSeries[i][1] / matrizPelisSeries[i][0];

                

            if (porcentaje >= porcentaje2 && porcentaje != 1.0 && matrizPelisSeries[i][3] == 2 && porcentaje != 0) {
                    
                nfil = i;
                
            } else {

                nfil = nfil;
            }

        }

    }
              
    return nfil;

}
    
    




    