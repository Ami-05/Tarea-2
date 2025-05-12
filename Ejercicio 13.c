//Cruz Apodaca Amiel Merari
//El siguiente programa tras pedir al usuario el numero de elementos del arreglo, obtiene como resultado la suma de los mismos

#include <stdio.h>
int main()
{
    int n, i, sum=0;
    
    printf("Introduce el numero de elementos del arreglo: ");
    scanf("%d", &n);
    int arreglo [n];
    
    printf("Introduce los %d elementos:\n", n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arreglo[i]);
        sum += arreglo[i];
    }
    
    printf("La suma de los valores del arreglo es: %d\n", sum);

    return 0;
}
