#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void cargar (int a[], int n) {
    srand(time(NULL));
    for (int i=0; i<n; i++) {
        a[i] = rand()%101;
    }
}

void print (int a[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
}

/*void rotar (int a[], int n, int r) {
    for (int i=0; i<n; i++) {
        if (r>0) {
            i = r%N;
        } else (r<0); {

        }
    }
}*/


int main () {

int A[N];
int r;

cargar(A, N);
print(A, N);

printf("\n\nPor favor, ingrese un número entero del rango [-9,9]: ");
scanf("%d", &r);

while (r == r>10 || r<-9) {
    printf("Número erróneo. Por favor, ingrese un número en el rango [-9,9]: ");
    scanf("%d", &r);

}

//rotar(A, N, r);


return 0;
}
