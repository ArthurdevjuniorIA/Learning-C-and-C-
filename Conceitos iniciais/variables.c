#include <stdio.h> 
#include <windows.h>
int main(void) {
    SetConsoleOutputCP(65001);
    int idade = 25;
    float pi = 3.1415;
    printf("Você tem %d anos\n", idade) ;
    printf("Java\n");
    printf("Você sabia que o valor de pi é %f\n", pi);
    return 0 ;
}
