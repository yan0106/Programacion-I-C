#include <stdio.h>
#include <stdlib.h>
#define N 10

// array de 10(diez) enteros positivos en el rango [101 a 999] (validar esto), ingresados manualmente
// a) indicar cuál es el promedio (quedarse solo con la parte entera del mismo) #
// b) indicar cuántas veces aparece cada número en el array. (Ayuda: considerar marcar los números ya revisados anteriormente.#
// c) determinar si alguno de los números presentes es el valor promedio, está a una distancia menor o igual de 5 del mismo, o a una distancia
// mayor.

// portotipos de funciones:
void cargaArray (int A[]);
void muestraArray (int A[]);
int promedio (int A[]);
void contarNumYDistancia (int A[], int num);

int main () {

    int A[N];

    cargaArray(A);
    muestraArray(A);

    int prom = promedio(A);

    printf("\nEl promedio del array es: %d\n", prom);

    contarNumYDistancia (A, prom);



return 0;
}

//desarrollo de funciones:

void cargaArray (int A[]) {
    printf("Por favor, ingrese 10 números enteros en el rango [101 a 999]: ");
    for (int i=0; i<N; i++) {
        printf("\nNúmero %d: ", i+1);
        scanf("%d", &A[i]);
        while (A[i]<101 || A[i]>999) {
            printf("Número inválido. Por favor ingrese un número entero en el rango [101 a 999]: ");
            scanf("%d", &A[i]);
        }
    }
}

void muestraArray (int A[]) {

    printf("\nLos números ingresados son: ");
    for (int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
}

int promedio (int A[]) {

    int suma = 0;
    int prom = 0;
    for (int i=0; i<N; i++) {
        suma = suma + A[i];
    }

    printf("\nLa suma es: %d", suma);
    prom = suma / N;

return prom;
}

void contarNumYDistancia(int A[], int num) {
    for (int i=0; i<N; i++) {
        if (A[i] == -1) // Se pone -1 para marcarlo. Si ya fue contado antes, continuar con lo que sigue
            continue;

        int contador = 1; // lo declaramos dentro del for para que cada vez que arranca el for (i), el contador vuelva a nacer como 1

        for (int j=i+1; j<N; j++) { // por qué inicia con i+1?
            if (A[i] == A[j]) { // compara el elemento del array con el segundo recorrido
                contador++;
                A[j] = -1; // marco como contado
            }
        }
        printf("El número %d) aparece veces: %d - ", A[i], contador);

        if (A[i] == num) {
            printf("ES EL PROMEDIO\n");
        }
        else if (abs(A[i]-num) <= 5) { // funcin valor absoluto para distancias
            printf("Distancia <= a 5\n");
        }
        else {
            printf("Distancia >5\n");
        }
    }
}



