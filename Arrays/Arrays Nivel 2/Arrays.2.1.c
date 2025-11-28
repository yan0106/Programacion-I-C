#include <stdio.h> //para funciones de entrada/salida como printf
#include <stdlib.h> //para usar rand() y srand()
#include <time.h> //para usar time()
#define N 30

int main() {

int A[N];

srand(time(NULL)); // le paso el tiempo, para que la secuencia de nros. cambie cada vez que corro el programa.
for (int i=0; i<N; i++) {
        A[i] = rand()%101; // para que arroje números del 0 al 100
    }

printf("Los números generados son:\n");
for (int i = 0; i < N; i++) {
    printf("%d ", A[i]);
}
printf("\n");

return 0;
}
