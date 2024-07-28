/*
    Complete o c�digo abaixo com uma estrutura condicional informando se o IMC da pessoa
    est� abaixo do peso, no peso adequado, acima do peso ou em obesidade.
*/

#include <stdio.h>

int main() {

    float altura, peso, imc;

    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Informe seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso/(altura*altura);
    printf("IMC: %.2f\n", imc);

    //Inicie Aqui

    if (imc < 18.5) {
        printf("Voce esta abaixo do peso.\n");
    } 
    else if (imc < 25) {
        printf("Voce esta no peso adequado.\n");
    } 
    else if (imc < 30) {
        printf("Voce esta acima do peso.\n");
    } 
    else {
        printf("Voce esta obeso.\n");
    }

    return 0;
}