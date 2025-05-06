//Cruz Apodaca Amiel Merari, en este codigo tras pedir al usuario dos numeros calculara la suma, resta y multiplicacion de dichos numeros//

int main() {
    int a, b, sum, rest, multi;
    
    printf("Introduce el primer numero: ");
    printf("numero 1\n");
    scanf ("%u", &a);
    
    printf("Introduce el segundo numero: ");
    printf("numero 2\n");
    scanf ("%u", &a);
    

    sum = a + b;
    rest = a - b;
    multi = a * b;
    
    printf ("Suma: %d\n", sum);
    printf ("Resta: %d\n", rest);
    printf ("Multiplicacion: %d\n", multi);

    return 0;
}
