#include<stdio.h>

int main () {

    float num;
    float sum=0;
    int cant=0;
    float prom;

    while (num!=0) {

        printf("Por favor, ingrese un número entero: ");
        scanf("%f", &num);

        if (num!=0){
            sum = sum + num;
            cant = cant + 1;
        }
    }

    if (cant > 0) {
        prom = sum / cant;
        printf("\nEl promedio es: %.2f\n", prom);
    } else {
        printf("\nNo se ingresaron números para calcular el promedio.\n");
    }


return 0;
}
