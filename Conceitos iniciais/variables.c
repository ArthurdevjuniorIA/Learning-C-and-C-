#include <stdio.h> 
#include <windows.h>
#include <time.h>
// 1. Definição da função fora do main
void processar_dados(void) {
    printf("Processando dados...\n");

    // Simulação do trabalho pesado (1,5 segundos)
}

int main(void) {
    //  Ativa o suporte de carcteres UTF-8
    
    SetConsoleOutputCP(65001);
    int idade = 25;

    // Guarda um valor com uma precisão de até 17 casas decimais
    double pi = 3.1415926535;

    // Guarda uma string
    char language_programming[] = "Python";
   
    bool esta_papirando = true;
    // Guarda o momento inicial
    clock_t inicio = clock();

    // 2. Chamada da função que executa a tarefa
   

    // Guarda o momento final
    clock_t fim = clock();

    // Converte e calcula a diferença de tempo
    double tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;


    printf("Você tem %d anos\n", idade) ;
    printf("Java\n");
    printf("Você sabia que o valor de pi é %.10f\n", pi);
    printf("O %s é mais fácil de aprender do que o C\n",language_programming);
    printf("Ele está papirando? %d\n",esta_papirando);
    if (esta_papirando == true){
        printf("Parabéns você é um guerreiro!\n");
    }
    else{
        printf("Você está sendo muito arrogantchi\n");
    }

    // Chama a função
    processar_dados();
    printf("\nCódigo finalizado com sucesso!\n");
    printf("Tempo total de execução: %.4f segundos\n", tempo_execucao);
    return 0 ;
}
