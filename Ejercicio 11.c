//Cruz Apodaca Amiel Merari
//El siguiente programa calcula la suma de los numeros pares comprendidos entre el 10 y 50

#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 10; i <= 50; i += 2)
    {
        sum += i;
    }
    
    printf("La suma de los números pares comprendidos entre 10 y 50 es: %d\n", sum);

    return 0;
}
