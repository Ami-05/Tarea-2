//Cruz Apodaca Amiel Mearari
//El siguiente programa con base en saber que un negocio aplica un descuento de 8% a todos los clientes cuya compra es superior a $2500.
//Y a partir de pedir al usuario el monto del cliente, calculara lo que el cliente debe pagar

#include <stdio.h>

int main()

{
    float monto_compra, monto_final;
    const float DESCUENTO =0.08;
    
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &monto_compra);
    
    if (monto_compra > 2500)
    {
        monto_final = monto_compra * (1-DESCUENTO);
    }
    
    else {
        monto_final = monto_compra;
    }
    
    printf("El monto a pagar es: %.2f\n", monto_final);

    return 0;
}
