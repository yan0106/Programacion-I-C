#include <stdio.h>

int main () {

int A [10];
int pos_par = 0, pos_impar = 0, neg_par = 0, neg_impar = 0;

printf("Por favor, ingrese 10 números enteros");
for (int i=0; i<10; i++){
    printf("\nNúmero %d: ", i+1);
    scanf("%d", &A[i]);
}

printf("\nLos números ingresados son: ");
for (int i=0; i<10; i++) {
    printf("%d ", A[i]);
}
printf("\n\n");

for (int i=0; i<10; i++) {
    if (A[i]>0 && A[i]%2==0) { // si es positivo y es par
        pos_par = pos_par+1;
    }
    if (A[i]>0 && A[i]%2!=0) { // si es positivo y es impar
        pos_impar = pos_impar+1;
    }
    if (A[i]<0 && A[i]%2==0) { // si es negativo y es par
        neg_par = neg_par+1;
    }
    if (A[i]<0 && A[i]%2!=0) { // si es negativo y es impar
        neg_impar = neg_impar+1;
    }
}
printf("Cantidad de elementos positivos y pares: %d", pos_par);
printf("\nCantidad de elementos positivos e impares: %d", pos_impar);
printf("\nCantidad de elementos negativos y pares: %d", neg_impar);
printf("\nCantidad de elementos negativos e impares: %d \n", neg_impar);

return 0;
}
