#include<stdio.h>
#define N 10

int main () {

float A[N];
float suma = 0;
float prom = 0;

printf("Por favor, ingrese 10 números: "); // cargo el array con 10 números
for (int i=0; i<N; i++) {
    printf("\nNúmero %d: ", i+1);
    scanf("%f", &A[i]);  // guardo los números en el array
}

printf("\nLos números ingresados son: "); // imprimo el array
for (int i=0; i<N; i++) {
    printf("%.2f ", A[i]); // %.2f para que me muestre solo dos decimales
}

for (int i=0; i<N; i++) {
    suma = suma + A[i]; // suma todos los valores del array
}

prom = suma / 10; // calcula el promedio de los valores del array

printf("\nEl promedio es: %.2f", prom); // muestra el promedio por pantalla

printf("\n");

printf("Los números que superan al promedio son: ");
for (int i=0; i<N; i++) { // calcula los números que superan al promedio
    if (A[i] > prom) {
        printf("%.2f ", A[i]);
    }
}
printf("\n");

return 0;
}
