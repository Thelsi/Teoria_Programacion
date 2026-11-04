#include <stdio.h>
#include <stdbool.h> 
#include <math.h>
int main() {
    //Entrada de datos.
    int a, t, i, s, cociente, residuo, extra = 0;
    printf("Digite un numero (a): ");
    scanf("%d", &a);
    printf("Digite un numero (t): ");
    scanf("%d", &t);
    printf("Digite un numero (i): ");
    scanf("%d", &i);
    printf("Digite un numero (s): ");
    scanf("%d", &s);
    //Proceso y salida de datos: Cociente y residuo de a / t
    if (t != 0) {
        cociente = a / t;
        residuo = a % t;
        printf("El cociente tiene como valor: %d\n", cociente);
        printf("El residuo tiene como valor: %d\n", residuo);
    } else {
        printf("No se puede dividir entre 0\n");
    }
    //Proceso y salida de datos: Residuo de i / s
    if (s != 0) {
    extra = i % s;
    printf("El residuo de la division extra tiene como valor: %d\n", extra);
    } else printf("No se puede dividir entre 0\n");
    //Mensaje motivacional :)
    printf("TU PUEDES, NO TE RINDAS!!!\n");
    return 0;
}