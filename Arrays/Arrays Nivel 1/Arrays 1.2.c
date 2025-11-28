#include <stdio.h>

int main () {

int A [] = {1, 5, 7, 8, 34}; // Declaro Arrays con asignación manual
int B [] = {45, 20, 12, 5, 7};
int S [5];

printf("Los valores de A son: "); // Imprimo los valores del Array A con un for
for(int i=0; i<5; i++) {
    printf("%d \t", A[i]); // printf dentro del for para que imprima las posiciones
    }

printf("\nLos valores de B son: ");
for(int i=0; i<5; i++) {
    printf("%d \t", B[i]);
    }

printf("\nLos valores de S son: ");
for (int i=0; i<5; i++) {
    S[i] = A[i] + B[i]; // sumo los valores de A y B y los almaceno en S
    printf("%d \t", S[i]); // imprimo las posiciones de S
}
printf("\n");

return 0;
}


