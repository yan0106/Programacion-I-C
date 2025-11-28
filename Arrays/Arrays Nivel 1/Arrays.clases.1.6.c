#include <stdio.h>
#define N 10

int main () {

    int num [N];
    int l;
    float prom = 0;
    float s2 = 0;

    for (int i=0; i<N; i++) {
        printf("Ingrese un número entero del rango [0, 100] %d: ", i+1);
        scanf("%d", &l);

        while (l<0 || l>100) {
            printf("Número fuera de rango\n");
            printf("Ingrese un número entero del rango [0, 100] %d: ", i+1);
            scanf("%d", &l);
        }
        num[i] = l;
        prom += num[i];
    }

    prom = prom / N;

    printf("Los valores ingresados son: \n");

    for (int i = 0; i<N; i++) {
        s2 = s2 + (num[i]-prom)*(num[i]-prom);
        printf(" %d", num[i]);
    }

    s2 = s2 / (N-1);

    printf("\nEl promedio es %f: ", prom);
    printf("\nLa varianza es %f: ", s2);


return 0;
}
