//Cruz Apodaca Amiel Merari
//El siguiente programa calcula e imprime el producto de los N primeros numeros naturales

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_NUMERIC, "");
    int n, i, mul, producto=1;
    
    printf("Ingrese un número del cual se obtendra el producto de todos los números antesesores a este: ");
    scanf("%d",&n);
    
    if(n<1)
    {
        printf("El numero debe ser un valor positivo.\n");
        return 1;
    }
    
    for (i=1;i<=n;i++)
    {
        mul=producto*i;
        producto=mul;
    }
    
    printf("La multiplicacion de los primeros %d numeros naturales es: %'11d\n", n, mul);

    return 0;
}
