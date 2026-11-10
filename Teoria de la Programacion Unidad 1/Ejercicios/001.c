#include <stdio.h>
int main() {
    // Declaracion de variables
    int x, u, val2, suma, producto;
    float promedio;
    // Datos de entrada.
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &x);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &u);

    printf("Ingrese el tercer numero entero: ");
    scanf("%d", &val2);
    // Proceso.
    suma = x + u + val2;
    producto = x * u * val2;
    promedio = (float)suma / 3;
    // Salida de resultados
    printf("\nOperacion aritmetica realizada: suma, producto y division.\n");

    printf("La suma es: %d\n", suma);
    printf("El producto es: %d\n", producto);
    printf("El promedio es: %.2f\n", promedio);

    // Evaluacion del resultado
    if (suma > 0) {
        printf("La suma es positiva.\n");
    } else {
        if (suma < 0) {
            printf("La suma es negativa.\n");
        } else {
            printf("La suma es igual a cero.\n");
        }
    }

    return 0;
}
