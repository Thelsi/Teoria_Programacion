#include <stdio.h>
#include <math.h>

int main() {
    // Definimos la constante simbólica.
    const float TASA_CAMBIO = 0.27;
    float soles, dolares;

    // Entrada de datos
    printf("Introduzca la cantidad de soles: ");
    scanf("%f", &soles);

    // Proceso: Cálculo
    dolares = soles * TASA_CAMBIO;

    // Evaluación condicional
    if (dolares > 0) {
        // Usamos round para redondear a 2 decimales (multiplicando y dividiendo por 100)
        dolares = round(dolares * 100.0) / 100.0;
        
        // Salida
        printf("%.2f soles equivalen al rededor de %.2f dolares.\n", soles, dolares);
    } else {
        printf("El valor en dolares es igual o menor a cero.\n");
    }

    // Sección de conclusiones
    printf("\n--- CONCLUSIONES ---\n");
    printf("Conclusion 1: Se logro establecer la conversion de soles a dolares.\n");
    printf("Conclusion 2: El codigo fue ejecutado exitosamente.\n");

    return 0;
}