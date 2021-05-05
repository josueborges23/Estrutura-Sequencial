#include <stdio.h>
#include <stdlib.h>
int main()
{
   int temperaturaEmCelcius;
    
    printf("Entre com a temperatura em Celcius: ");
    scanf("%i", &temperaturaEmCelcius); 
    
    printf("Temperatura em Fahreheit: \n%i",
    ((temperaturaEmCelcius*9) / 5)+32);
    
    return 0;
}