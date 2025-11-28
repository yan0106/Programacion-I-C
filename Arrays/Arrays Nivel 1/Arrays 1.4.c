#include <stdio.h>
#define N 10

int main () {

float A[N];
float P[N];
float f=0;

printf("Por favor ingrese 10 números"); // ingreso de elementos y carga de Array A
for (int i=0; i<N; i++) {
    printf("\nNúmero %d: ", i+1);
    scanf("%f", &A[i]);
}

do {
    printf("\nPor favor ingrese un nuevo número f, en el rango (0, 100]: "); // ingreso y carga de valor f
    scanf("%f", &f);
    if (f <= 0 || f > 100) { // control del rango solicitado
        printf("Número fuera de rango. Intente nuevamente.\n");
    }
} while (f <= 0 || f > 100);


printf("\nLos números ingresados son: "); // muestro los números ingresados
for (int i=0; i<N; i++) {
    printf("%2.f ", A[i]);
}
printf("\nEl número f ingresado es: %2.f", f); // muestro el valor f ingresado

for (int i=0; i<N; i++) { // cargo el Array P con la operación solicitada
    P[i]= A[i] * f;
}

printf("\nLos números de P son: "); // muestro los elementos del Array P, luego de la operación
for (int i=0; i<N; i++) {
    printf("%2.f ", P[i]);
}
printf("\n");

return 0 ;
}
