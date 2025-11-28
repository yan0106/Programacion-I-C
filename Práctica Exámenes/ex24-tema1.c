#include <stdio.h>
#define N 10 // macro - reemplazo de texto

//prototipo de funciones:
void cargar (int A[]);
void mostrar (int A[]);
int compara_mitades (int A[]); // tratar de evitar recorrer 2 veces el array en esta función

int main () {

int B[N]; // declaro mi array

cargar(B); // llamo a la función cargar
mostrar(B); // llamo a la función mostrar

int resultado = compara_mitades(B); // esta variable guarda el resultado de la función compara_mitades()

if (resultado == 3) { // comparo los resultados y los imprimo por pantalla
    printf("\nLa suma de los elementos de la primer mitad es mayor\n");
} if (resultado == 2) {
    printf("\nLa suma de los elementos de la primer mitad es menor\n");
} else if (resultado == 1) {
    printf("\nLa suma de los elementos de la primer mitad es igual a la suma de la segunda mitad\n");
}

return 0;
}

//desarrollo de las funciones:
void cargar (int A[]) {
    printf("Por favor, ingrese 10 números enteros: ");
    for (int i=0; i<N; i++) {
    printf("\nNúmero %d: ", i+1);
    scanf("%d", &A[i]);
    }
}

void mostrar (int A[]) {
    printf("\nLos números ingresados son: ");
    for (int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }

}

int compara_mitades (int A[]) {
    int prim_suma=0;
    int seg_suma=0;
    int i;
    int j;
    for (i=0, j=5; i<5, j<N; i++, j++) { // uso un solo for para recorrer el array
        prim_suma = prim_suma + A[i];
        seg_suma = seg_suma + A[j];
    }

    int comparador = 0;

    if (prim_suma > seg_suma) {
        comparador = 3;
    }
    if (prim_suma < seg_suma) {
        comparador = 2;
    }
    else if (prim_suma == seg_suma) {
        comparador = 1;
    }

return comparador; // este resutado lo tengo que guardar en una variable
}
