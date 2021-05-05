#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int temperaturaEmCelcius;
    

    int primeiroNumero;
    printf("Entre com o valor do primeiro numero: ");
    scanf("%i", &primeiroNumero); 
    
    int segundoNumero;
    printf("Entre com o valor do segundo numero: ");
    scanf("%i", &segundoNumero); 
    
    float terceiroNumero;
    printf("Entre com o valor do terceiro numero: ");
    scanf("%f", &terceiroNumero); 
    
    
    //a. O produto do dobro do primeiro com metade do segundo .
    printf("O produto do dobro do primeiro com metade do segundo:\n%i\n",(primeiroNumero*2)*(segundoNumero/2));

    //b. A soma do triplo do primeiro com o terceiro.
    printf("A soma do triplo do primeiro com o terceiro:\n%.0f\n ",
    primeiroNumero*3+terceiroNumero);

    //c. O terceiro elevado ao cubo.
    printf("O terceiro elevado ao cubo:\n%.0f\n ",
    pow(terceiroNumero,3));
    return 0;
}