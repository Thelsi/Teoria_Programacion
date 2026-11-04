#include <stdio.h>
#include <math.h>
int main(){
    //Datos de entrada y declaración de variables.
    float promedio, umbral;
    int n1, n2, n3, n4;
    const float UMBRAL = 10.00;
    printf("Bienvenido. \nEste algoritmo permite calcular el promedio de 4 numeros enteros. Pruebalo.\n");
    printf("Introduce el primer numero: ");
    scanf("%d", &n1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &n2);
    printf("Introduce el tercer numero: ");
    scanf("%d", &n3);
    printf("Introduce el cuarto numero: ");
    scanf("%d", &n4);
    //Proceso: Calcular el promedio.
    promedio = (n1 + n2 + n3 + n4) / 4.00;
    //Datos de salida y verificación de expresiones racionales.
    printf("El promedio es: %.2f\n", promedio);
    if (promedio > 0){
        printf("El promedio es mayor a 0.\n");
    } else {
        printf("El promedio es menor o igual a 0.\n");
    }
    if (promedio > umbral){
    printf("El promedio es mayor al umbral predefinido (>10).\n");
    } else {
        printf("EL promedio es menor o igual al umbral predefinido (<=10).\n");
    }
    return 0;
}