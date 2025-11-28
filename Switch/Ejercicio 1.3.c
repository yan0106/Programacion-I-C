#include <stdio.h>

int main () {

float salario_actual;
float salario_nuevo;

printf("Por favor, ingrese su salario: \n");
scanf("%f", &salario_actual);

if (salario_actual <= 9000) {
            salario_nuevo = salario_actual + (salario_actual*0.20); // suma del 20%

        } else if (salario_actual > 9000 && salario_actual <= 15000) {
                salario_nuevo = salario_actual + (salario_actual * 0.10); // suma del 10%

            } else if (salario_actual > 15000 && salario_actual <= 20000) {
                    salario_nuevo = salario_actual + (salario_actual*0.05); // suma del 5%

                } else (salario_actual > 20000); {
                        salario_nuevo = salario_actual + (salario_actual*0.03); // suma del 3%

                        };

printf("\nEl salario nuevo es: %f\n", salario_nuevo);

return 0;
}
