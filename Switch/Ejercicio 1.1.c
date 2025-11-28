#include <stdio.h> // librería estandar de entrada y salida

int main () {

    int num;

    printf("Por favor, ingrese un número entero del 1 al 7: ");
    scanf("%d", &num);

    switch (num) {

        case 1:
            printf("Domingo\n");
        break;
        case 2:
            printf("Lunes\n");
        break;
        case 3:
            printf("Martes\n");
        case 4:
            printf("Miercoles\n");
        break;
        case 5:
            printf("Jueves\n");
        break;
        case 6:
            printf("Viernes\n");
        break;
        case 7:
            printf("Sabado\n");
        break;
        default:
            printf("Numero invalido. Por favor, ingrese un numero entero del 1 al 7.\n");

    }


    return 0;
}

