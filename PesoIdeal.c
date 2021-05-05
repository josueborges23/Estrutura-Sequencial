#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    float altura;
    printf("Entre com altura:");
    scanf("%f", &altura);  
    
   
    printf("O valor do peso ideal feminino: = %f\n", (float) ((62.1*altura) -44.7));  
    printf("O valor do peso ideal masculino: = %f\n", (float) ((72.7*altura) - 58));  

    return 0;
}

