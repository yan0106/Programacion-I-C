#include <stdio.h>

int main () {

    float x=0;
    float y=0;
    float r=0;
    char op;

    printf("Por favor, ingrese un número: \n");
    scanf("%f", &x);

    printf("\nIngrese otro número: \n");
    scanf("%f", &y);

    printf("\nElegir la operación (+, -, *, /): \n");
    scanf(" %c", &op);


    switch (op) {

        case '+': r=x+y;
        break;

        case '-': r=x-y;
        break;

        case '*': r=x*y;
        break;

        case '/': if (y!=0) {
                    r=x/y;
                }
                else {
                    printf("No es posible dividir por 0");
                };
        break;

        default: printf("Operación inválida\n");

    };

    printf("\nEl resultado es %f\n", r);

return 0;
}
