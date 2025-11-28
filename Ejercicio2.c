#include <stdio.h>

int main () {

char car;
int contador = 0; // lo inicializo en cero que es neutro para la suma. Si fuese multiplicación, lo inicio en 1.

printf("Ingrese caracteres, '0' para terminar \n\n");

scanf(" %c", &car);

while (car !='0'){

    if (car == 'a' || car == 'A')
        contador = contador + 1;

    scanf(" %c", &car);

    }

printf("\nSe ingresaron %d, letras 'a'", contador);

return 0;
}
