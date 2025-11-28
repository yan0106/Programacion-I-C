#include <stdio.h>

int main () {

    int A [5] = {1, 5, 8, 7, 9};
    int B [5] = {2, 8, 9, 10, 4};
    int S [5];
    int pe=0;

    for (int i=0; i<5; i++) {

        S[i]= A[i]+B[i];
        pe = A[i]*B[i];

    }

    printf("Los números de S son: ");

    for (int i=0; i<5; i++) {
        printf("%d ", S[i]);
    }

    printf("\nEl producto a escalar es: %d", pe);

return 0;
}
