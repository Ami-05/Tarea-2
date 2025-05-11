//Cruz Apodaca Amiel Merari
//El siguiente programa a partir de que el usuario da un arreglo unidimensional de enteros y un numero entero
//Determina cuantas veces se encuentra el numero dentro del arreglo

#include <stdio.h>

int main()
{
    int n, i, sum=0, numero;
    
    printf("Introduce el numero de elementos del arreglo: ");
    scanf("%d", &n);
    
    int arreglo [n];
    
    printf("Introduce los %d elementos:\n", n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arreglo[i]);
    }
    
    printf("Introduce el numero a buscar: ");
    scanf("%d", &numero);
    
    for (i=0; i<n; i++)
    {
        if (arreglo[i] == numero)
        {
            sum++;
        }
    }
    
    printf("El numero %d aparece %d veces en el arreglo.\n", numero, sum);

    return 0;
}
