#include <stdio.h>
#include <math.h>
int main(){
    //Datos de entrada y definición de variables.
    float masa, volumen, densidad, raiz;
    printf("Bienvenido.\nPara calcular la densidad del objeto, por favor introduce su masa (en gramos) y su volumen (en cm3)\n");
    printf("Introduzca la masa aqui: ");
    scanf("%f", &masa);
    printf("Introduzca el volumen aqui: ");
    scanf("%f", &volumen);
    //Proceso: Evaluar si el volumen es mayor a 0 para hacer los cálculos respectivos.
    if (volumen > 0){
        densidad = masa / volumen;
        raiz = sqrt(fabs(densidad));
    //Datos de salida.
        printf("La densidad del objeto es: %.2f\n", densidad);
        printf("La raiz cuadrada del valor absoluto del resultado es: %.2f\n", raiz);
    } else {
        printf("Usuario, el volumen que introduce debe ser mayor a 0.\n");
    }
    return 0;
}


