/******************************************************************************
atividade usando struct
data 05/04/2023
*******************************************************************************/

#include <stdio.h>

float RECEITA (float valor, float valorDespesa){
    float result;
    result = valor + valorDespesa;
    return result;
}
float DESPESA (float valor, float valorDespesa){
    float result;
    result = valor - valorDespesa;
    return result;
}

int main()
{
    struct info_projetos{
        int numProjeto;
        float valor;
        int tipoDespesa;
    };
    
    struct info_projetos projetos_funcionario1;
    float valorDespesa;
    
    printf("Digite o numero do Projeto: ");
    scanf("%d", &projetos_funcionario1.numProjeto);
    printf("Digite o valor do projeto: ");
    scanf("%f", &projetos_funcionario1.valor);
    printf("Digite o tipo de despesa('1' para Receita e '0' para Despesa): ");
    scanf("%d", &projetos_funcionario1.tipoDespesa);
    printf("Digite o valor da despesa: ");
    scanf("%f", &valorDespesa);
    
    float valorFinal = 0;
    
    
    if(projetos_funcionario1.tipoDespesa == 1 || projetos_funcionario1.tipoDespesa == 1){
        valorFinal = RECEITA(projetos_funcionario1.valor, valorDespesa);
    }else if(projetos_funcionario1.tipoDespesa == 0 || projetos_funcionario1.tipoDespesa == 0){
        valorFinal = DESPESA(projetos_funcionario1.valor, valorDespesa);
    }else{
        printf("TIPO DE DESPESA INVALIDO\n");
    }
    printf("Valor final do projeto é de: %f", valorFinal);
    
    return 0;
}
