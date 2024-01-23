#include <stdio.h>

// Funçao para inverter os dois ultimos bits de cada byte
unsigned char inverterBits(unsigned char byte) {
    return byte ^ 0b00000011;
}

// Funçao para trocar os 4 bits com os proximos 4
unsigned char trocarBits(unsigned char byte) {
    return ((byte & 0b11110000) >> 4) | ((byte & 0b00001111) << 4);
}

// Funçao principal para descriptografar a mensagem
void descriptografarMensagem(unsigned char mensagem[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        mensagem[i] = trocarBits(inverterBits(mensagem[i]));
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Funçao para calcular a menor distancia entre dois arrays
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
    // Tamanhos dos arrays (pelo menos 10 números em cada array)
    int tamanho1 = 10;
    int tamanho2 = 10;

    // Arrays de exemplo
    int array1[] = {-1, 5, 8, 12, 20, 25, 30, 35, 40, 45};
    int array2[] = {26, 6, 10, 15, 18, 22, 28, 32, 38, 50};

    // Calcular e imprimir a menor distancia
    int resultado = menorDistancia(array1, array2, tamanho1, tamanho2);
    printf("A menor distância entre os dois arrays é: %d\n", resultado);

    return 0;
}
