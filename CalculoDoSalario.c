#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salarioHora;
    int qtdHorasTrabalhadas;
    
    printf("Entre com o salario por hora:");
    scanf("%f", &salarioHora); 
    
    printf("Quantidade de horas trabalhadas: ");
    scanf("%i", &qtdHorasTrabalhadas);
    
    float salarioBruto=salarioHora*qtdHorasTrabalhadas;
    printf("Salario bruto: %.2f\n",salarioBruto);
    
    float valorPagoAoInss=salarioBruto*0.11f;
    printf("Valor Pago ao INSS: %.2f\n", valorPagoAoInss);
    
    float valorPagoAoSindicato=salarioBruto*0.05f;
    printf("Valor Pago ao Sindicato:  %.2f\n",valorPagoAoSindicato);
    
    float salarioLiquido=salarioBruto-valorPagoAoInss-valorPagoAoSindicato;
    printf("Salário Líquido: %.2f\n",salarioLiquido);
    
    return 0;
}