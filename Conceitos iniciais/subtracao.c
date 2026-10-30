#include <stdio.h>

int main(void){
    int numero1;
    int numero2;
    int operacao;
    
    // Pedimos os inputs dos números
    scanf("%d",&numero1);
    scanf("%d",&numero2);

    // Fazemos o cálculo depois que o usuário digita os inputs
    operacao = numero1-numero2;

    printf("%d\n",operacao);
    return 0;
}