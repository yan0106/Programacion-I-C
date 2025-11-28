#include <stdio.h>

int main () {

    int cuadrado=0;
    int suma=0;

    for (int i=1; i<=100; i++) {

        cuadrado = i*i;
        suma= suma + cuadrado;

    }

    printf("La suma de los cuadrados de los 100 primeros número enteros es: %d\n", suma);

return 0;
}
