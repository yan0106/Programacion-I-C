#include <stdio.h>

int main () {

int suma = 0;

for (int i=1; i<=100; i++) {

    if (i%2!=0) {
        suma = suma + i;
    }
}

printf("La suma de todos los números impares del 1 al 100 es: %d\n", suma);

return 0;
}
