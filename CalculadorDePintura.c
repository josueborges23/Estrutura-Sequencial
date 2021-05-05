#include <stdio.h>
#include <stdlib.h>
int main()
{
   
    int qtdMetrosQuadrados;
    printf("Insira a quantidade de metros quadrados a serem pintadas:\n");
    scanf("%i", &qtdMetrosQuadrados); 
     
    float valorDeMetrosQuadradosComFolga = qtdMetrosQuadrados + qtdMetrosQuadrados *0.1f;
    
    float litrosDeTintaNecessarios=valorDeMetrosQuadradosComFolga/6;
    
    int latasDe18LitrosNecessarias=(qtdMetrosQuadrados/18)+1;
    
    printf("\nLatas de 18 lts necessarias:\n%i ",
    latasDe18LitrosNecessarias);
    
    int latasDe3_6LitrosNecessarias=(qtdMetrosQuadrados/3.6)+1;
    
    printf("\nLatas de 3,6 lts necessarias:\n%i ",
    latasDe3_6LitrosNecessarias);
    
    
    int precoTotalDaPinturaApenasComLatasDe18 = latasDe18LitrosNecessarias*80;
    
    int precoTotalDaPinturaApenasComLatasDe3_6 = latasDe3_6LitrosNecessarias*25;
    
    int precoTotalComMisturaDeLatasDe18e3_6 =(precoTotalDaPinturaApenasComLatasDe18-80) + ((valorDeMetrosQuadradosComFolga-((latasDe18LitrosNecessarias-1)*18))*25);
    //Parte Das Latas de 3,6
    
    printf("\nPreco das latas de 18lts necessarias:\n%i ",
    precoTotalDaPinturaApenasComLatasDe18);
    
    printf("\nPreco das latas de 3,6lts necessarias:\n%i ",
    precoTotalDaPinturaApenasComLatasDe3_6);
    
    printf("\nPreco das latas de 3,6lts e 18lts em mix evitando desperdício:\n%i\n ",
    precoTotalComMisturaDeLatasDe18e3_6);
    return 0;
}
