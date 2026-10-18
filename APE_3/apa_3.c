#include <stdio.h>
int main() {
    
    printf("Escriba la cantidad de documentos: ");
    int cant_doc = 0;
    scanf("%d", &cant_doc);
    printf("Escriba el espacio promedio que usa un documento en MB: ");
    float espa_doc = 0.0;
    scanf("%f", &espa_doc);
    printf("Escriba la cantidad de imagenes: ");
    int cant_ima = 0;
    scanf("%d", &cant_ima);
    printf("Escriba el espacio promedio que una imagen en MB: ");
    float espa_ima = 0.0;
    scanf("%f", &espa_ima);
    printf("Escriba la cantidad de videos: ");
    int cant_vid = 0;
    scanf("%d", &cant_vid);
    printf("Escriba el espacio promedio que usa un video en MB: ");
    float espa_vid = 0;
    scanf("%f", &espa_vid);
    printf("Escriba la cantidad de programas: ");
    int cant_pro = 0;
    scanf("%d", &cant_pro);
    printf("Escriba el espacio promedio que usa un programa en MB: ");
    float espa_pro = 0.0;
    scanf("%f", &espa_pro);
    printf("Escriba el espacio total que tiene su disco en GB: ");
    float gb_disco = 0;
    scanf("%f", &gb_disco);

    float espa_total_doc = cant_doc*espa_doc;
    float espa_total_ima = cant_ima*espa_ima;
    float espa_total_vid = cant_vid*espa_vid;
    float espa_total_pro = cant_pro*espa_pro;
    float espa_total = espa_total_doc + espa_total_ima + espa_total_vid + espa_total_pro;
    float espacio_total_gb = espa_total/1024;
    float porcentaje = (espacio_total_gb/gb_disco)*100;
    float espa_libre = gb_disco-espacio_total_gb;

    printf("\n--- RESULTADOS ---\n");
    printf("Espacio de documentos: %.2f MB\n", espa_total_doc);
    printf("Espacio de imagenes: %.2f MB\n", espa_total_ima);
    printf("Espacio de videos: %.2f MB\n", espa_total_vid);
    printf("Espacio de programas: %.2f MB\n", espa_total_pro);
    printf("Espacio total utilizado: %.2f MB\n", espa_total);
    printf("Espacio total utilizado: %.2f GB\n", espacio_total_gb);
    printf("Porcentaje utilizado: %.2f%%\n", porcentaje);
    printf("Espacio libre: %.2f GB\n", espa_libre);
    printf("Capacidad del disco: %.2f GB\n", gb_disco);
    return 0;
}