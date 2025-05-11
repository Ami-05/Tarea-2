//Cruz Apodaca Amiel Merari
//El siguiente programa obtiene la tabla de multiplicar de un numero entero N, comenzando desde el 1 concluyendo en el 10

#include <stdio.h>

int main()
{
    int N;
    
    printf("Ingrese el numero entero del cual se obtendra la tabla de multiplicar: ");
    scanf("%d", &N);
    
    for (int i=1; i <= 10; i++)
    {
        printf ("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
