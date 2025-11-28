#include <stdio.h>
#define S 10

int main () {

int M[S];
int N[S];
int suma_M = 0;
int suma_N = 0;

// Array M:
printf("Por favor ingrese 10 enteros, entre el rango [0,50]: ");
for (int i=0; i<S; i++) {
    printf("\nNúmero %d: ", i+1);
    scanf("%d", &M[i]);
    suma_M = suma_M + M[i];

    while (M[i]<0 || M[i]>50) {
        printf("Por favor ingrese un número en el rango [0,50]: ");
        scanf("%d", &M[i]);
    }
}

printf("\nM: ");
for (int i=0; i<S; i++){
    printf("%d ", M[i]);
}

//Array N:
printf("\n\nPor favor ingrese otros 10 enteros, entre el rango [0,50]: ");
for (int i=0; i<S; i++) {
    printf("\nNúmero %d: ", i+1);
    scanf("%d", &N[i]);
    suma_N = suma_N + N[i];

    while (N[i]<0 || N[i]>50) {
        printf("Por favor ingrese un número en el rango [0,50]: ");
        scanf("%d", &N[i]);
    }
}

printf("\nN: ");
for (int i=0; i<S; i++){
    printf("%d ", N[i]);
}

// Comparación de los dos arrays:

int iguales = 1;  // Asumo que son iguales

for (int i = 0; i < 10; i++) {
    if (M[i] != N[i]) {
        iguales = 0;  // Encontré una diferencia. No son iguales.
        break;
    }
}

if (iguales == 1) { // si son iguales...
    printf("\n\nLos arrays son iguales.");
} else if (suma_M == suma_N) { // si las sumas coinciden...
    printf("\n\nLos arrays son similares. ");
} else { // si no coinciden en los compenentes ni en las sumas...
    printf("\n\nLos arrays son diferentes.");
}
printf("\n");

return 0;
}
