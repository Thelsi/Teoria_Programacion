#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    float Divisor, menor, calificacion_1, calificacion_2, calificacion_3, suma_total, promedio, coseno;
//Datos de entrada
    Divisor = 2;
    printf("Introduzca la calificacion 1: ");
    scanf("%f", &calificacion_1);
    printf("Introduzca la calificacion 2: ");
    scanf("%f", &calificacion_2);
    printf("Introduzca la calificacion 3: ");
    scanf("%f", &calificacion_3);
//Proceso: Calcular la suma total, el promedio y el coseno del resultado.
    suma_total = calificacion_1 + calificacion_2 + calificacion_3;
    menor = calificacion_1;
    
    if (calificacion_2 < menor){
        menor = calificacion_2;
    }
    if (calificacion_3 < menor) {
        menor = calificacion_3;
    }
//Verificación de que el divisor no sea igual a 0.    
    if (Divisor != 0){
        promedio = (suma_total - menor) / Divisor;
        coseno = cos(promedio);
//Datos de salida.
        printf("El promedio de las dos mejores es: %.2f\n", promedio);
        printf("El coseno del promedio es: %.2f\n", coseno);
    } else {
        printf("No se puede dividir entre 0\n");
    }
    
    return 0;
}