//Cruz Apodaca Amiel Merari
//El siguiente programa a partir de que el usuario de como dato el sueldo de un trabajador considerara un aumento del 15% si un sueldo es inferior a $1000 y de un 12% en caso contrario, imprimiendo asi el sueldo con el aumento incorporado

#include <stdio.h>

int main()

{
    float sueldo, aumento, nuevo_sueldo;
    
    printf("Ingrese el sueldo del trabajador del cual se quiere obtener el nuevo sueldo: ");
    scanf("%f", &sueldo);
    
    if (sueldo < 1000)
    {
        aumento = sueldo * 0.15;
    }
    
    else {
        aumento = sueldo * 0.12;
    }
    
    nuevo_sueldo = sueldo + aumento;
    
    printf("El nuevo sueldo con el sumento es: %.2f\n", nuevo_sueldo);

    return 0;
}
