#include <stdio.h>

int main () {

printf("Estos son los números impares que hay entre 1 y 100: \n\n");

for (int i=1; i<=100; i++) {

    if (i%2!=0){
        printf("%d ", i);
    }
}


return 0;
}
