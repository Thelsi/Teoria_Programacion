#include <stdio.h>
#include <math.h>
int main(){
    //Datos de entrada y declaración de variables.
    float dolares, pesos, cociente, TASA_CAMBIO, FACTOR;
    TASA_CAMBIO = 4000.0;
    FACTOR = 1.5;
    printf("Introduzca la cantidad de dolares que quiere traducir a pesos: ");
    scanf("%f", &dolares);
    //Conversión de dolares a pesos en caso de cumplirse la condición.
    pesos = dolares * TASA_CAMBIO;
    if (pesos > 0){
        printf("%.2f dolares equivalen a %.2f pesos\n", dolares, pesos);
        cociente = pesos / FACTOR;
        printf("El cociente del resultado entre 1.5 es: %.2f\n", cociente);
    //Notificación al usuario si los dolares no son mayores a cero.
    } else {
        printf("La cantidad de dolares debe ser mayor a cero.");
    //Datos de salida: Conclusiones.
    }
    printf("\nCONCLUSIONES\n");
    printf("El algoritmo permite exitosamente convertir x cantidad de dolares a y cantidad de pesos.\n");
    printf("El codigo se ejecuto correctamente.\n");
    return 0;
}