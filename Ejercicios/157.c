
#include <stdio.h>

int main() {

    // Declaracion de variables
    float gb_consumidos, costo_gb, costo_velocidad, exceso, costo_exceso, subtotal, descuento_empresa, total, descuento_adicional, total_final;
    int velocidad;
    char tipo_cliente;

    // Declaracion de constantes simbolicas
    const float PRECIO_GB = 0.50;
    const float PRECIO_MBPS = 1.0;
    const float DESC_EMPRESA = 0.15;
    const float EXCESO_GB = 1.5;
    const float GB_INCLUIDOS = 100;

    // Descripcion del algoritmo
    printf("Bienvenido. Este algoritmo permite calcular el costo mensual del servicio de internet.\n");

    // Entrada de datos
    printf("\nIngrese los GB consumidos: ");
    scanf("%f", &gb_consumidos);

    printf("Ingrese la velocidad contratada en Mbps: ");
    scanf("%d", &velocidad);

    printf("Ingrese el tipo de cliente (R: Residencial, E: Empresa): ");
    scanf(" %c", &tipo_cliente);

    // Validacion de datos
    if (gb_consumidos >= 0 && velocidad > 0 &&
        (tipo_cliente == 'R' || tipo_cliente == 'E')) {

        // Calculo del costo por consumo de GB
        costo_gb = gb_consumidos * PRECIO_GB;

        // Calculo del costo por velocidad contratada
        costo_velocidad = velocidad * PRECIO_MBPS;

        // Calculo del costo adicional por exceso de GB
        if (gb_consumidos > GB_INCLUIDOS) {
            exceso = gb_consumidos - GB_INCLUIDOS;
            costo_exceso = exceso * EXCESO_GB;
        } else {
            exceso = 0;
            costo_exceso = 0;
        }

        // Calculo del subtotal
        subtotal = costo_gb + costo_velocidad + costo_exceso;

        // Aplicacion del descuento empresarial
        if (tipo_cliente == 'E') {
            descuento_empresa = subtotal * DESC_EMPRESA;
        } else {
            descuento_empresa = 0;
        }

        // Calculo del total despues del descuento empresarial
        total = subtotal - descuento_empresa;

        // Aplicacion del descuento adicional del 5%
        descuento_adicional = total * 0.05;
        total_final = total - descuento_adicional;

        // Mostrar resultados
        printf("\nCosto por consumo de GB: %.2f\n", costo_gb);
        printf("Costo por velocidad contratada: %.2f\n", costo_velocidad);
        printf("Costo por exceso de GB: %.2f\n", costo_exceso);
        printf("Subtotal: %.2f\n", subtotal);
        printf("Descuento empresarial: %.2f\n", descuento_empresa);
        printf("Total despues del descuento empresarial: %.2f\n", total);
        printf("Descuento adicional del 5%%: %.2f\n", descuento_adicional);
        printf("Costo mensual definitivo: %.2f\n", total_final);

    } else {
        // Mensaje cuando los datos no son validos
        printf("\nError: introduzca datos validos.\n");
    }

    return 0;
}
