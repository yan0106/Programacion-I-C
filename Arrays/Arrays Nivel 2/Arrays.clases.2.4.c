#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10


void cargar (int a[], int n) {
    srand(time(NULL)); // le paso el tiempo, para que la secuencia de nros. cambie
    // cada vez que corro el programa.
    int i;
    for (i=0; i<n; i++) {
        a[i] = rand()%101;
    }
}

void print (int a[], int n) {
    int i;
    for (i=0; i<n; i++){
        printf("%d\t", a[i]);
    }

}

void invertir (int a[], int n) {
    int i, t;
    // j = n-1-i
    for (i=0; i<n-1-i; i++) {
            t = a [n-1-i];
            a [n-1-i] = a[i];
            a [i] = t;
    }
}

void mostrar (int a[], int n) {
    int i;
    printf("\n\n");
    for (i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
}

int main () {

    int m [N];
    cargar(m, N);
    print (m, N);
    invertir(m, N);
    mostrar(m, N);

return 0;
}

