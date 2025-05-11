//Cruz Apodaca Amiel Merari
//El siguiente programa a partir de tener como entrada un arreglo unidimensional de enteros, determina cuantos de ellos son positivos, negativos o nulos.

#include <stdio.h>

int main()
{
    int n, i;
    int positivos=0, negativos=0, nulos=0;
    
    printf("Introduce el numero de elementos del arreglo: ");
    scanf("%d", &n);
    
    int arreglo [n];
    
    printf("Introduce los %d elementos:\n", n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arreglo[i]);
        if(arreglo[i]>0)
        {
            positivos++;
        }
        else if (arreglo[i]<0)
        {
            negativos++;
        }
        else
        {
            nulos++;
        }
    }
    
    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);
    printf("Cantidad de numeros nulos: %d\n", nulos);

    return 0;
}
