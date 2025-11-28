#include <stdio.h>

int main () {

char op;
float y=0;
float x=0;
float r=0;

printf("Ingrese un número, para salir ingrese 0\n\n");
scanf("%f", &y);

printf("Ingrese otro número, para salir ingrese 0\n\n");
scanf("%f", &x);

printf("Elegir la operación(+, -, *, /)");
scanf(" %c", &op);

switch (op) {

        case '+' : r=x+y;
                    break;

        case '-' : r=x-y;
                    break;

        case '*' : r=x*y;
                    break;

        case '/' : if (y!= 0) {
                        r=x/y;
                    }
                    else {
                        printf("No es posible dividir por 0");
                     };
                    break;

        default : printf("Operación inválida\n");

    };

    printf("El resultado es %f", r);

    return 0;
}
