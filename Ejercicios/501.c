#include <stdio.h>
#include <math.h>

int main(){
    //Entrada de datos.
    float largo, ancho, alto, volumen, promedio, diferencia;
    printf("Introduzca el largo del prisma: ");
    scanf("%f", &largo);
    printf("Introduzca el ancho del prisma: ");
    scanf("%f", &ancho);
    printf("Introduzca el alto del prisma: ");
    scanf("%f", &alto);
    //Proceso: volumen, promedio y diferencia del prisma.
    if (largo > 0 && ancho > 0 && alto > 0) {
        volumen = largo * ancho * alto;
        promedio = (largo + ancho + alto) / 3;
        diferencia = volumen - promedio;
    //Datos de salida.
        printf("El volumen del prisma es %.2f\n", volumen);
        printf("El promedio de los valores es %.2f\n", promedio);
        printf("la diferencia entre el volumen y el promedio es de: %.2f\n", diferencia);
    //Dato de salida en caso de no cumplir con lo requerido.
    } else {
        printf("Los datos ingresados no cumplen con lo requerido (mayores a cero).");
    }
    return 0;
}