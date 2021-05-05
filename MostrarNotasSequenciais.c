 #include <stdio.h>
#include <stdlib.h>
int main()
{  
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    
    printf("Informe a nota 1:");
    scanf("%i", &numero1);
    printf("Informe a nota 2:");
    scanf("%i", &numero2);
    printf("Informe a nota 3:");
    scanf("%i", &numero3);
    printf("Informe a nota 4:");
    scanf("%i", &numero4);
    
    printf("Media de notas: %i\n", 
    ((numero1+numero2+numero3+numero4)/4));
    
    return 0;
}