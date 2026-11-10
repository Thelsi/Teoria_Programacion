
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    //Datos de entrada: Declaración de variables y constantes.
    
    float salario, base, retencion, tasa, resultado_final, descuento;
    int dependientes;
    char contrato;
    bool veracidad;
    const float EXEPTO_DEPENDIENTE = 100.0;
    const float TASA_F = 0.15;
    const float TASA_T = 0.10;
    const float TASA_P = 0.20;
    veracidad = false;
    //Mensaje de bienvenida.
    printf("Bienvenido.\nIntroduzca su salario: ");
    
    //Introduccón de datos por parte del usuario.
    
    scanf("%f", &salario);
    printf("Introduzca el numero de dependientes: ");
    scanf("%d", &dependientes);
    printf("Introduzca su tipo de contrato (T / F / P): ");
    scanf(" %c", &contrato);
    
    //Verificación del tipo de contrato.
    
    if (contrato == 'F') {
        tasa = TASA_F;
        veracidad = true;
    } else if (contrato == 'T') {
        tasa = TASA_T;
        veracidad = true;
    } else if (contrato == 'P') {
        tasa = TASA_P;
        veracidad = true;
    }
    
    //Proceso y datos de salida cuando el tipo de contarto introducido sea verdadero.
    
    if (veracidad) {
        base = salario - (dependientes * EXEPTO_DEPENDIENTE);
        retencion = base * tasa;
        descuento = retencion * 0.05;
        resultado_final = retencion - descuento;
        printf("\nLa base tiene como valor: %.2f\n", base);
        printf("La tasa aplicada es: %.2f\n", tasa);
        printf("La retencion tiene como valor: %.2f\n", retencion);
        printf("El descuento del cinco por ciento es: %.2f\n", descuento);
        printf("La retencion con el descuento es: %.2f\n", resultado_final);
    
    //Datos de salida cuando el tipo de contarto introducido sea falso.
    
    } else {
        printf("Por favor, seleccione un contrato correcto.\n");
    
    //Concluciones del algoritmo.
    
    }
    printf("\n---Conclusiones---\n");
    printf("El algoritmo permite calcular las retenciones fiscales de un trabajador, ");
    printf("a partir de su sueldo mensual, numero de dependientes y tipo de contrato.\n");
    printf("Se calculo la retencion fiscal junto a un descuento del 5%%.");
    return 0;
}
