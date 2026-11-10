#include <stdio.h>

int main() {
    
    // Datos de entrada: Declaracion de variables y constantes.
    float distancia, rendimiento, precio_combustible, costo_peaje, combustible, peajes, comida, hospedaje, subtotal, iva_calculado, total, descuento, total_final;
    int numero_peajes, dias;
    const float COSTO_COMIDA = 30.0;
    const float COSTO_HOSPEDAJE = 50.0;
    const float IVA = 0.15;
    printf("Bienvenido al sistema de calculo de viajes.\n");
    printf("Por favor, introduzca los siguientes datos:\n");
    printf("Ingrese la distancia en kilometros: ");
    scanf("%f", &distancia);
    printf("Ingrese el rendimiento del vehiculo (km/L): ");
    scanf("%f", &rendimiento);
    printf("Ingrese el precio del combustible: ");
    scanf("%f", &precio_combustible);
    printf("Ingrese el numero de peajes: ");
    scanf("%d", &numero_peajes);
    printf("Ingrese el costo por peaje: ");
    scanf("%f", &costo_peaje);
    printf("Ingrese los dias del viaje: ");
    scanf("%d", &dias);
    
    // Validacion de los datos introducidos.
    
    if (distancia >= 0 && rendimiento > 0 &&
        precio_combustible >= 0 && numero_peajes >= 0 &&
        costo_peaje >= 0 && dias >= 0) {
        // Proceso.
        combustible = (distancia / rendimiento) * precio_combustible;
        peajes = numero_peajes * costo_peaje;
        comida = dias * COSTO_COMIDA;
        hospedaje = dias * COSTO_HOSPEDAJE;

        subtotal = combustible + peajes + comida + hospedaje;
        iva_calculado = subtotal * IVA;
        total = subtotal + iva_calculado;
        descuento = total * 0.05;
        total_final = total - descuento;
        
        //Datos de salida.
        
        printf("\nCosto del combustible: %.2f\n", combustible);
        printf("Costo de los peajes: %.2f\n", peajes);
        printf("Costo de alimentacion: %.2f\n", comida);
        printf("Costo de hospedaje: %.2f\n", hospedaje);
        printf("Subtotal: %.2f\n", subtotal);
        printf("IVA: %.2f\n", iva_calculado);
        printf("Total con IVA: %.2f\n", total);
        printf("Descuento adicional del 5%%: %.2f\n", descuento);
        printf("Costo definitivo del viaje: %.2f\n", total_final);
    } else {
        printf("\nError: introduzca valores validos.\n");
    }

    return 0;
}