#include <stdio.h>
#include <math.h>

int main(){
//Datos de entrada y declaración de variables.
    float z, v, dato_1, promedio, porcentaje, valor_ref;
    int Divisor;
    
    Divisor = 3;
    printf("Introducir z: ");
    scanf("%f", &z);
    printf("Introducir v: ");
    scanf("%f", &v);
    printf("Introducir dato 1: ");
    scanf("%f", &dato_1);
    printf("Introducir un valor de referencia: ");
    scanf("%f", &valor_ref);
 //Proceso: calcular el promedio.   
    promedio = (z + v + dato_1) / Divisor;
//Validación de que promedio > 0 para mostrar el promedio y el porcentaje respecto a la referencia.   
    if (promedio > 0) {
//Datos de salida.
        printf("El promedio es: %.2f\n", promedio);
        porcentaje = (promedio / valor_ref) * 100;        
        printf("El porcentaje respecto a la referencia es: %.2f%%\n", porcentaje);
//Dato de salida en caso de que promedio < 0.
    } else { 
        printf("El promedio es igual o menor a cero, no se puede calcular el porcentaje.\n");
    }
    
    return 0;
}