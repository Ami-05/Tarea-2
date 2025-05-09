//Cruz Apodaca Amiel Merari
//Este programa a partir de que el usuario da el radio de un circulo, calcula e imprime el area y la circunferencia 

#include <stdio.h>
#include <math.h>

int main()
{
    float radio, area, circunferencia;
    
    printf("Introduce el radio del circulo a partir del cual se calculara el area y su circunferencia: ");
    scanf("%f", &radio);
    
    area = M_PI * pow(radio, 2);
    circunferencia = 2 * M_PI * radio;
    
    printf("Area del circulo: %.2f\n", area);
    printf("Circunferencia del circulo: %2f\n", circunferencia);

    return 0;
}
