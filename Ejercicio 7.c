//Cruz Apodaca Amiel Merari
//El siguiente programa calculara el precio de un ticket ida y vuelta en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
//Tambien se sabe que si el numero de dias de estancia es mayor a 7 y la distancia total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene un descuento del 30%. El precio por km es de $0.23.

#include <stdio.h>

int main()

{
    const float precio_por_kilometro = 0.23;
    float distancia_ida, distancia_total, precio_total;
    int dias_estancia;
    
    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distancia_ida);
    
    printf("Ingrese el numero de dias de estancia: ");
    scanf("%d", &dias_estancia);
    
    distancia_total = 2 * distancia_ida;
    
    precio_total = distancia_total * precio_por_kilometro;
    
    if (dias_estancia > 7 && distancia_total > 800)
    {
        precio_total *= 0.7;;
    }
    
    else {
        printf("No se aplica descuento.\n");
    }
    
    printf("El precio del ticket es: %.2f\n", precio_total);

    return 0;
}
