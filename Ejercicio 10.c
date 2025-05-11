//Cruz Apodaca Amiel Merari
//El siguiente programa leera los primeros 100 numeros naturales y contara cuentos de ellos son positivos, negativos o nulos.

#include <stdio.h>

int main()
{
int numero, positivos=0, negativos=0, nulos=0;
printf("Ingrese 100 números, se contara cuantos son positivos, cuantos son negativos y cuantos son nulos.\n");

for(int i=0; i<100; i++)
{
    printf("Numero %d: ", i + 1);
    scanf("%d",&numero);

if(numero>0)
{
positivos++;
}
else if (numero<0)
{
negativos++; 
}
else
{
nulos++;
}
}
printf("Resultados;\n");
printf("%d ",positivos);
printf("números positivos.\n");
printf("%d ",negativos);
printf("números negativos.\n");
printf("%d ",nulos);
printf("números nulos.\n");

return 0;
}
