//Cruz Apodaca Amiel Merari
//El siguiente programa a partir de pedir al uusario el monto de inversion asi como la tasa de interes mensual, calculara el monto de dinero que obtendra a fin de mes

#include <stdio.h>

int main()

{
    float monto_inicial, tasa_interes;
    int meses;
    
    printf("Ingrese el monto de inversion inicial: ");
    scanf("%f", &monto_inicial);
    
    printf("Ingrese la tasa de interes mensual (en decimal por ejemplo 0.05 para 5%%): ");
    scanf("%f", &tasa_interes);
    
    printf("Ingrese el numero de meses del que quiere calcular su monto para fin de mes: ");
    scanf("%d", &meses);
    
    for(int i = 1; i <= meses; i++)
    {
        monto_inicial *= (1 + tasa_interes);
        printf("Mes %d: %.2f\n", i, monto_inicial);
    }
    

    return 0;
}
