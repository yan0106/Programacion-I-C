#include <stdio.h>
#define N 5

void cargaArray (int X[]);
void muestraArray (int X[]);
int sumaPrima(int X[]);


int main () {

    int A[N];

    cargaArray(A);
    muestraArray(A);

    int esPrimo = sumaPrima(A); // guardo el resultado (return) de la función SumaPrima()

    if (esPrimo == 1) { // evaluo si ese resultado es 1
        printf("\nLa suma es un número primo.\n");
    } else printf("\nLa suma no es un número primo.\n");


return 0;
}

void cargaArray(int X[]) {
    printf("Por favor ingrese 5 números positivos.\n");
    for (int i=0; i<N; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &X[i]); // guardo el número ingresado en el array A
        while (X[i]<=0) { // controlo que sea mayor a 0
            printf("Número erróneo. Por favor, ingrese un número positivo: "); // si no es mayor a 0, arroja un mensaje y solicita el ingreso nuevamente
            scanf("%d", &X[i]);
        }
    }
}

void muestraArray (int X[]) {
    printf("Los números ingresados son: ");
    for (int i=0; i<N; i++){
        printf("%d ", X[i]);
    }
}

int sumaPrima(int X[]) {
    int suma = 0; // variable suma para acumular la suma de los números
    int esPrimo = 0;
    for (int i=0; i<N; i++) {
        suma = suma + X[i];
    }
    if (suma<=1) { // casos especiales
        esPrimo = 0;
        }
    if (suma==2) { // casos especiales
        esPrimo = 1;
        }
    if (suma>2) { // evalúa si el número tiene otros divisores
        esPrimo = 1; // asumo que es primo
        for (int i=2; i<suma; i++) {
            if (suma % i == 0) { // si tiene otros divisores, no es primo
                esPrimo = 0;
                break;
            }
        }
    }
printf("\nLa suma es %d", suma);
return esPrimo;
}



