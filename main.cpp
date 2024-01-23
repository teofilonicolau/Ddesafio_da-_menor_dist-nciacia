#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int menorDistancia(int array1[], int array2[], int tamanho1, int tamanho2) {
    int minDistancia = INT_MAX;

    for (int i = 0; i < tamanho1; i++) {
        for (int j = 0; j < tamanho2; j++) {
            int distancia = abs(array1[i] - array2[j]);
            if (distancia < minDistancia) {
                minDistancia = distancia;
            }
        }
    }

    return minDistancia;
}

int main() {
    
    int tamanho1 = 10;
    int tamanho2 = 10;

    
    int array1[] = {-1, 5, 8, 12, 20, 25, 30, 35, 40, 45};
    int array2[] = {26, 6, 10, 15, 18, 22, 28, 32, 38, 50};

   
    int resultado = menorDistancia(array1, array2, tamanho1, tamanho2);
    printf("A menor distância entre os dois arrays é: %d\n", resultado);

    return 0;
}
