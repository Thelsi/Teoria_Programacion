#include <stdio.h>
#include <math.h>
int main() {
    float radio, angulo, area_sector, divisor, PI, FACTOR;
    PI = 3.14159;
    FACTOR = 360;
    printf("Pasos:\n 1. Ingrese un radio valido.\n 2. Ingrese el angulo en grados.\n 3. El sistema validara los datos y calculara el area y su division.\n");
    printf("Por favor, ingrese el valor del radio: ");
    scanf("%f", &radio);
    printf("Por favor, ingrese el valor del angulo: ");
    scanf("%f", &angulo);
    if (radio > 0 && angulo > 0) {
        area_sector = (PI * radio * radio * angulo) / FACTOR;
        divisor = area_sector / PI;
        printf("El area del sector es: %.2f\n", area_sector);
        printf("El area dividida por Pi es %.2f\n", divisor);
    } else {
        printf("Error: Por favor, escriba datos validos (radio > 0 y angulo > 0).\n");
    }
    return 0;
}