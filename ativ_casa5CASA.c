#include <stdio.h>
#include <string.h>

int main() {
    int codigo, profissao;
    float salario, aumento, novoSalario, porcentagem;
    

    printf("Digite o c�digo do cargo do funcion�rio (1-4):\n");
    printf("1 - Desenvolvedor Java\n");
    printf("2 - Analista de Redes\n");
    printf("3 - Arquiteto DevOps\n");
    printf("4 - T�cnico de Suporte\n");
    scanf("%d", &codigo);

    printf("Digite o sal�rio atual do funcion�rio: R$ ");
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
            printf("Cargo: T�cnico de Suporte\n");
            porcentagem = salario *0.13;
            novoSalario = porcentagem + salario;
            break;
        default:
            printf("C�digo de cargo inv�lido.\n");
            return 1;
    }

    // Sa�da formatada:
   
    printf("Sal�rio atual: R$%.2f\n", salario);
    printf("Aumento: R$%.2f\n", porcentagem);
    printf("Novo sal�rio: R$%.2f\n", novoSalario);

    return 0;
}