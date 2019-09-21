/******************************************************************************
    Instituto Federal do Triângulo Mineiro - Uberlândia Centro
    Licenciatura em Computação
    2º Período (2019/2)
    Algoritmo e Programação
    Clarimundo

Lista 1
Exercício 6
Programa que verifica se um número é primo ou não
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    //Configurando língua e limpando a tela
    setlocale (LC_ALL,"portuguese");
    system ("clear");
    
    //Declarando as variaveis
    int num, inc, cont=0;
    
    printf("\nPrograma que verifica se o número digitado é primo ou não.\n\nObs.: O número deve ser natural.\n");
    
    //Solicitando ao usuário para digitar um número
    printf("\nDigite um número natural:\n");
    scanf("%d", &num);
    
    //Verificando se o número é natural e primo
    if(num > 0) {
        printf("\nO número %d é natural, verificando se é primo...\n", num);
        for(inc = 2; inc <= num / 2; inc++) {
            if((num % inc) == 0) {
                cont++;
                break;
            }
        }
        sleep(1);
        if(cont == 0) {
            printf("\nO número %d é primo.\n\n", num);
        }
        else {
            printf("\nO número %d não é primo.\n\n", num);
        }
    }
    else {
        printf("\nO número digitado não é natural. Por favor, tente novamente!\n\n");
    }
    
    return 0;
}