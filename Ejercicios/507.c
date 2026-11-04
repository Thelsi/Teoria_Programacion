#include <stdio.h>
#include <math.h>
int main(){
    //Datos de entrada y declaración de variables.
    float lado, area, s1, s2, s3, suma, LADOS, TANGENTE;
    LADOS = 5;
    TANGENTE = 0.688;
    printf("Introducta el valor del lado del pentagono regular: ");
    scanf("%f", &lado);
    //Proceso: Validar que "lado" sea mayor a cero.
    if (lado > 0){
        area = LADOS * lado * lado * TANGENTE;
        s1 = LADOS * lado;
        s2 = s1 * lado;
        s3 = s2 * TANGENTE;
        suma = s1 + s2 + s3;
    //Datos de salida
        printf("El area del pentagono regular es: %.2f\n", area);
        printf("La suma acumulada de los resultados parciales es: %.2f\n", suma);
    } else {
        printf("Error: El lado debe ser mayor a 0");
    }
    return 0;
}
