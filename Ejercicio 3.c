//Cruz Apodaca Amiel Merari
//El siguiente programa dada una cantidad expresada en dolares, convierte esa cantidad en pesos, tomando en cuenta que el 1 dolar = 11.96 pesos

#include <stdio.h>

int main()
{
    float dolares, pesos;
    const float TASA_CAMBIO =11.96;
    
    printf("Introduce la cantidad de dolares, que se quiere obtener su equivalente en pesos: ");
    scanf("%f", &dolares);
    
    pesos = dolares * TASA_CAMBIO;
    
    printf("Equivalente en pesos: %.2f\n", pesos);

    return 0;
}
