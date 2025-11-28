#include <stdio.h>
#define N 5

int main () {

    int A [N] = {3, 5, 8, 2, 9}, i, c, x=0;
    //Variables auxiliares: i (para el for), c (auxiliar para cada elemento), y x (acumulador, inicializado en 0).
    for (i=0; i<N; i++) {
        if(i%2 == 0) continue; // si i es par, salta la ejecución del código
        c = A[i]; // guarda el valor del indice impar en c
        x += 2*c; // x acumula los valores de c*2
    }

    printf("--> %d\n", x);  // -->14

return 0;
}
