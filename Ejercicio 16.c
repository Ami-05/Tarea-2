//Cruz Apodaca Amiel Merari
//El siguiente programa almacena en un arreglo unidimensional los primeros 100 numeros pares, e imprime al final el arrreglo

#include <stdio.h>

int main()
{
    int arreglo[100];
    int numero=1, indice=0;
    
    while (indice<100)
    {
        if(numero % 2 == 0)
        {
            arreglo[indice] = numero;
            indice++;
        }
        numero++;
    }
    
    printf("Los primeros 100 numeros pares son:\n");
    for (int i=0; i<100; i++)
    {
        printf("%d ", arreglo[i]);
    }
   
    return 0;
}
