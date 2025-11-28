#include<stdio.h>

int main () {

    float num=0;
    float sum=0;
    float prom=0;

    printf("Por favor, ingrese 10 números: \n");

    for (int i=0; i<10; i++) {
        printf("Número %d: ", i+1); // para que muestre Número 1: , Número 2: ...
        scanf("%f", &num);
        sum = sum + num;
    }

    printf("\nLa suma de los números ingresados es: %.2f\n", sum); // %.2f para que muestre dos decimales nomás

    prom = sum / 10;

    printf("\nEl promedio de los números ingresados es: %.2f\n", prom);

return 0;
}
