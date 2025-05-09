//Cruz Apodaca Amiel Merari
//El siguiente programa determinara, dados dos numeros enteros, si un numero es divisor del otro

#include <stdio.h>

int main()

{
    int a, b;
    
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &a);
    
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &b);
    
    if (b != 0 && a % b == 0)
    {
        printf("%d es divisor de %d.\n", b, a);
    }
    
    else {
        printf("%d no es divisor %d.\n", b, a);
    }
    
    if (a != 0 && b % a == 0)
    {
        printf("%d es divisor de %d.\n", a, b);
    }
    
    else {
        printf("%d no es divisor %d.\n", a, b);
    }

    return 0;
}
