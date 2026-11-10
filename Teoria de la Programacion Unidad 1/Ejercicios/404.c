#include <stdio.h>
#include <stdbool.h> 
#include <math.h>

int main() {
    float capital, tasa, interes_generado, monto_total = 0.0;
    int tiempo, redondeo;
//Datos de entrada junto al encabezado.
    printf("=============================================\n");
    printf("         SISTEMA DE CALCULO FINANCIERO       \n");
    printf("=============================================\n");
    
    printf("Introducir el capital: ");
    scanf("%f", &capital);
    
    printf("Introducir la tasa de interes anual: ");
    scanf("%f", &tasa);
    
    printf("Introducir el tiempo en anios: ");
    scanf("%d", &tiempo);
//Proceso para obtener el monto total y el interes generado.
    interes_generado = (capital * tasa * tiempo) / 100;
    monto_total = capital + interes_generado;

    printf("\n----------- DESGLOSE DE RESULTADOS -----------\n");
    printf("Capital inicial: $%.2f\n", capital);
    printf("Interes generado: $%.2f\n", interes_generado);
    printf("Monto total: $%.2f\n", monto_total);
    printf("----------------------------------------------\n");

    redondeo = trunc(monto_total);
//Redondeo para determinar si el resultado es par o impar.
    if (redondeo % 2 == 0) {
        printf("La parte entera del monto total (%d) es PAR\n", redondeo);
    } else {
        printf("La parte entera del monto total (%d) es IMPAR\n", redondeo);
    }

    return 0;
}
