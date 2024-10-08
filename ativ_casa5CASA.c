   //Escreva um algoritmo em C que receba o sal�rio de um funcion�rio e o cargo de seu c�digo.
    //De acordo com seu c�digo, informe quanto de aumento ele teve e o valor atual de seu sal�rio.
    //A tabela a seguir apresenta os cargos e seus respectivos aumentos: //



#include <stdio.h>
#include <string.h>

int main() {
    int codigo, profissao;
    float salario, aumento, novoSalario, porcentagem;
    

    printf("Digite o código do cargo do funcionário (1-4):\n");
    printf("1 - Desenvolvedor Java\n");
    printf("2 - Analista de Redes\n");
    printf("3 - Arquiteto DevOps\n");
    printf("4 - Técnico de Suporte\n");
    scanf("%d", &codigo);

    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salario);

  
    switch (codigo) {
        case 1:
            printf("Cargo: Desenvolvedor Java\n");
            porcentagem = salario * 0.30;
            novoSalario = porcentagem + salario;

            break;
        case 2:
            printf("Cargo: Analista de Redes\n");
            porcentagem = salario * 0.25;
            novoSalario = porcentagem + salario;
            break;
        case 3:
            printf("Cargo: Arquiteto DevOps\n");
            porcentagem = salario * 0.50;
            novoSalario = porcentagem + salario;
            break;
        case 4:
            printf("Cargo: Técnico de Suporte\n");
            porcentagem = salario *0.13;
            novoSalario = porcentagem + salario;
            break;
        default:
            printf("Código de cargo inválido.\n");
            return 1;
    }

    // Saída formatada:
   
    printf("Salário atual: R$%.2f\n", salario);
    printf("Aumento: R$%.2f\n", porcentagem);
    printf("Novo salário: R$%.2f\n", novoSalario);

    return 0;
}
