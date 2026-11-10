#include <stdio.h>
#include <math.h>

int main(){
    float c1, c2, c3, nl;
    float notaObjetivo = 60.0;
    float pesoCertamenes = 0.70;
    float pesoLab = 0.30; 
    printf("Ingrese la nota del primer certamen (c1): \n");
    scanf("%f", &c1);
    printf("Ingrese la nota del segundo certamen (c2): \n");
    scanf("%f", &c2);
    printf("Ingrese la nota del laboratorio (nl): \n");
    scanf("%f", &nl);
    c3 = (((notaObjetivo - (nl * pesoLab)) * 3) / pesoCertamenes) - c1 - c2;
    printf("Para aprobar con 60 puntos, necesita obtener en el C3: %.2f \n", c3); 
    return 0;
}