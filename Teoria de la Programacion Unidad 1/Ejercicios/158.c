
#include <stdio.h>

int main (){
    //Datos de entrada: Declaración de variables y constantes.
    float consumo, subtotal, descuento1, descuento2, iva, propina, resultado_final, descuento_adicional, total, total_final;
    char dia;
    int personas;

    const float DESC_LUNES = 0.10;
    const float DESC_GRUPO = 0.15;
    const int MIN_GRUPO = 6;
    const float IVA = 0.15;
    const float PROPINA = 0.10;

    //Bienvenida al usuario.
    
    printf("Bienvenido al sistema de calculo del hotel Poseidon. Por favor, introduzca los siguientes datos:\n");

    printf("Introduzca su consumo: ");
    scanf("%f", &consumo);

    printf("Introduzca el dia de hoy ('L', 'M', 'X', 'J', 'V', 'S', 'D'): ");
    scanf(" %c", &dia);

    printf("Introduzca el numero de personas: ");
    scanf("%d", &personas);

    subtotal = consumo;

    //Comprobacion de descuentos.
    
    if (dia == 'L'){
        descuento1 = subtotal * DESC_LUNES;
    } else {
        descuento1 = 0;
    }

    if (personas >= MIN_GRUPO){
        descuento2 = subtotal * DESC_GRUPO;
    } else {
        descuento2 = 0;
    }

    //Proceso: Calculo del desglose.
    
    resultado_final = subtotal - descuento1 - descuento2;
    iva = resultado_final * IVA;
    propina = resultado_final * PROPINA;
    total = resultado_final + iva + propina;
    descuento_adicional = total * 0.05;
    total_final = total - descuento_adicional;

    //Datos de salida: Desglose completo.
    
    printf("\nConsumo inicial: %.2f\n", subtotal);
    printf("Descuento por lunes: %.2f\n", descuento1);
    printf("Descuento por grupo: %.2f\n", descuento2);
    printf("Subtotal con descuentos: %.2f\n", resultado_final);
    printf("IVA: %.2f\n", iva);
    printf("Propina: %.2f\n", propina);
    printf("Total antes del descuento adicional: %.2f\n", total);
    printf("Descuento adicional del 5%%: %.2f\n", descuento_adicional);
    printf("Total definitivo a pagar: %.2f\n", total_final);

    return 0;
}
