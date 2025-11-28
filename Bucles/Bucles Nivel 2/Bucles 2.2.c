#include <stdio.h>

int main() {    //UN NRO. ES PRIMO CUANDO TIENE SOLO DOS DIVISORES: 1 Y ÉL MISMO. SI SE
                //SI SE PUEDE DIVIR POR OTRO NRO, ENTONCES NO ES PRIMO. El nro. 1 no es primo.

    int num=0;

    printf("Por favor, ingrese un número entero mayor a 0: ");
    scanf("%d", &num);

    while (num<=0) {
        printf("\nNúmero erróneo. Por favor, ingrese un número mayor a 0: ");
        scanf("%d", &num);
    }

    // printf("\nEl número ingresado es: %d", num);

    // CASO ESPECIAL:

    if (num == 1) {
        printf("\nEl número 1 no es primo.\n");
    }

    /*if (num % 1 == 0 && num % num == 0) {
            printf("El número es primo");  Esto no alcanza para saber si es primo, hay que evaluar los otros
    numeros tmb */

    for (int i=2; i<num; i++) { // Busca si hay algn número entre 2 y (num-1) que divida exactamente a num

        if (num % i == 0) {
            printf("\nEl número %d no es primo.\n", num);
            break;
        }

        if (i == num) {
            printf("\nEl número %d es primo.\n", num);
        }
    }

    // VER CASO CON NUMERO 2 !!

return 0;
}
