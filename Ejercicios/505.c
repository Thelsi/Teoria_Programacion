#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int x;
    float mitad;
    bool es_par_positivo;
    //Datos de entrada y bienvenida
    printf("Hola!, bienvenido. Este algoritmo te permite verificar si un numero es positivo y par, al igual que su mitad. Sientete libre de usarlo.\n");
    printf("Introduce un numero entero: ");
    scanf("%d", &x);
    //Proceso: Determinar si el número ingresado es par y positivo.
    es_par_positivo = (x > 0 && x % 2 == 0);
    if (es_par_positivo) {
        mitad = x / 2;
    //Datos de salida
    printf("El numero: %d es par y positivo.\n", x);
    printf("La mitad de: %d es: %.2f\n", x, mitad);
    } else {
        printf("El numero %d no es par o positivo.\n", x);
    }
    return 0;
}