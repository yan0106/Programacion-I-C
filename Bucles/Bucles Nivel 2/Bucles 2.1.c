#include<stdio.h>

int main () {

    int num=0;

    printf("Por favor, ingrese un número entero: \n");
    scanf("%d", &num);

    printf("\nEl número ingresado es divisible por: ");

    for (int i=1; i<=num; i++) {

        if (num % i == 0) {
            printf("%d ", i);
        }
    }

return 0;
}
