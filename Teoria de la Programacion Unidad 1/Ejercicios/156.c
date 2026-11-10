#include <stdio.h>

int main() {
    // Declaracion de variables.
    int edad, anios_experiencia;
    float valor_auto, precio_base, recargo_joven, descuento_experiencia;
    float precio_cobertura, descuento_adicional, precio_final;
    char tipo_cobertura;

    // Declaracion de constantes.
    const float TASA_BASE = 0.05;
    const float RECARGO_JOVEN = 0.20;
    const float DESC_EXPERIENCIA = 0.10;
    const int EDAD_JOVEN = 25;
    const int ANIOS_EXPERIENCIA = 5;

    // Descripcion de los pasos del algoritmo.
    printf("Este algoritmo calcula el precio de un seguro de auto.\n");
    printf("Solicita los datos, aplica recargos y descuentos, y muestra el precio final.\n");

    // Lectura de datos.
    printf("\nIngrese la edad del conductor: ");
    scanf("%d", &edad);

    printf("Ingrese los años de experiencia: ");
    scanf("%d", &anios_experiencia);

    printf("Ingrese el valor del auto: ");
    scanf("%f", &valor_auto);

    printf("Ingrese la cobertura (B: Basica, C: Completa, P: Premium): ");
    scanf(" %c", &tipo_cobertura);

    // Validacion de los datos.
    if (edad >= 0 && anios_experiencia >= 0 &&
        anios_experiencia <= edad && valor_auto > 0 &&
        (tipo_cobertura == 'B' || tipo_cobertura == 'C' || tipo_cobertura == 'P')) {

        // Calculo del precio base.
        precio_base = valor_auto * TASA_BASE;

        // Aplicacion del recargo por conductor joven.
        if (edad < EDAD_JOVEN) {
            recargo_joven = precio_base * RECARGO_JOVEN;
        } else {
            recargo_joven = 0;
        }

        // Aplicacion del descuento por experiencia.
        if (anios_experiencia >= ANIOS_EXPERIENCIA) {
            descuento_experiencia = precio_base * DESC_EXPERIENCIA;
        } else {
            descuento_experiencia = 0;
        }

        // Calculo del precio segun la cobertura.
        precio_cobertura = precio_base + recargo_joven - descuento_experiencia;

        if (tipo_cobertura == 'C') {
            precio_cobertura = precio_cobertura * 1.5;
        } else if (tipo_cobertura == 'P') {
            precio_cobertura = precio_cobertura * 2;
        }

        // Aplicacion del descuento adicional del 5%.
        descuento_adicional = precio_cobertura * 0.05;
        precio_final = precio_cobertura - descuento_adicional;

        // Presentacion del detalle.
        printf("\nPrecio base: %.2f\n", precio_base);
        printf("Recargo por conductor joven: %.2f\n", recargo_joven);
        printf("Descuento por experiencia: %.2f\n", descuento_experiencia);
        printf("Precio segun cobertura: %.2f\n", precio_cobertura);
        printf("Descuento adicional del 5%%: %.2f\n", descuento_adicional);
        printf("Precio final del seguro: %.2f\n", precio_final);

    } else {
        // Mensaje para datos invalidos.
        printf("\nError: introduzca datos validos.\n");
    }

    return 0;
}