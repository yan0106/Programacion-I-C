#include <stdio.h>
#define N 10

int main () {

    int enteros[N];
    int l;

    for (int i=0; i<10; i++){
        printf("\nIngrese un número entero %d: \n", i+1);
        scanf("%d", &l);

        while (l<=10 || l> 10){
            printf("Número fuera de rango\n");
            printf("Ingrese Número %d: ", i+1);
            scanf("%d", &l);
        }

        enteros[i] = l;
    }

    for(int i=0; i<N; i++) {
        printf("\n %d\n", enteros[i]);

    }

return 0;
}
