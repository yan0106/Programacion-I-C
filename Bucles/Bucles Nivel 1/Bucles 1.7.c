#include<stdio.h>

int main() {

    int num=0;

    printf("Por favor, ingrese un número del 1 al 15: ");
    scanf("%d", &num);

    while (num>15) {
        printf("\nNúmero erróneo. Por favor, ingrese un número del 1 al 15: ");
        scanf("%d", &num);
            }

    printf("\nEl número ingresado es: %d\n\n", num);

    for (int i=0; i<num; i++) {
            printf("*");
        }

return 0;
}
