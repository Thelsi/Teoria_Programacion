#include <stdio.h>
#include <math.h>
int main (){
    //Datos de entrada y definición de variables
    float lado, area, resta, LADOS, FACTOR;
    LADOS = 6;
    FACTOR = 1.5;
    printf("Introduzca el valor del lado del hexagono regular: ");
    scanf("%f", &lado);
    //Proceso en caso de que lado sea mayor a 0.
    if (lado > 0){
        area = LADOS * lado * lado * 0.866;
        resta = area - (area * 0.05);
    //Datos de salida en caso de cumplirse la condición.
        printf("El area del hexagono regular es: %.3f\n", area);
        printf("La resta del 5%% del area es: %.3f", resta);
    //Dato de salida en caso de que lado no sea igual a 0.
    } else {
        printf("Error, el lado es menor o igual a 0.");
    }
    return 0;
}
