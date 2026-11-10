//Bibliotecas
#include <stdio.h>
#include <stdbool.h> 
#include <math.h>

int main() {
    float a, b, pro, logaritmo = 0.0;
//Datos de entrada
    printf("Escribe un numero (a): ");
    scanf("%f", &a);
    printf("Escribe un numero (b): ");
    scanf("%f", &b);
//Proceso para calcular el promedio.
    printf("Los numeros introducidos son: %.2f y %.2f\n", a, b);
    
    pro = (a + b) / 2;

    if (pro > 0) {
        printf("El promedio es mayor a cero\n");
    }
    else {
        printf("El promedio es menor o igual a cero.\n");
    }

    printf("El promedio es: %.2f\n", pro);
    //Proceso para calcular el algoritmo en base 10
    if (pro > 0) {
        logaritmo = log10(pro);
        printf("El logaritmo en base 10 del promedio es de: %.2f\n", logaritmo);
    } 
    else {
        printf("No se puede calcular el logaritmo en base 10 porque el promedio no es mayor a 0.\n");
    }

    return 0;
}