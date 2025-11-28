#include<stdio.h>

int main () {

int n; // n<m
int p;
int m;

printf ("\nImprimir la sucesion de numeros N+i*P desde N hasta otro M dado\n");

do {
    printf("\nIngrese un número entero (N): ");
    scanf("%d", &n);
    printf("Ingrese un segundo número entero mas grande que el primero (M): ");
    scanf("%d", &m);
} while (n>=m);

printf ("\nAhora ingrese un numero entero chico (P): ");
scanf ("%d", &p);

for (int i=0; n+i*p<=m; i++){
        printf("%d  ", n+i*p);
    }

return 0;
}
