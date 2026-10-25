#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){ 
    SetConsoleOutputCP(65001);
    int quantas_vezes = 0;
    int maximo_minutos = 60;
    int minutos;
    // Seu código vai aqui
    printf(" ");
    scanf("%d",&minutos);
    while (minutos>=maximo_minutos){
        quantas_vezes+=1;
        minutos-=60;
        
    }
    printf("%d\n",quantas_vezes);
    printf("%d",minutos);
    return 0;

}