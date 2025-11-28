#include <stdio.h>

int main () {

int a=0;
int b=0;
int suma=0;

printf("Por favor, ingrese un número entero: ");
scanf("%d", &a);

printf("\nPor favor, ingrese otro número entero, mayor que el primero: ");
scanf("%d", &b);

while (b<a) {
    printf("\nNumero erroneo. Por favor, ingrese otro número entero, mayor que el primero: ");
    scanf ("%d", &b);
}

printf("\nLos números son: %d %d\n", a,b);

for (int i=a; i<=b; i++) {
    suma = suma + i;
}

printf("\nLa suma de todos los números entre el primero y el segundo número es: %d\n", suma);

return 0;
}
