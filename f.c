#include <stdio.h>

int main() {
    // Definir los valores de las operaciones
    float resultado;
    
    // Calcular las operaciones
    resultado = (5 + 2.0/1) / (1 + 2.0/1) / (2 - 1.0/4);

    // Imprimir el resultado
    printf("El resultado de la operación es: %f\n", resultado);

    return 0;
}