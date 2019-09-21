/******************************************************************************
    Instituto Federal do Triângulo Mineiro - Uberlândia Centro
    Licenciatura em Computação
    2º Período (2019/2)
    Algoritmo e Programação
    Clarimundo

Lista 1
Exercício 7
Programa que calcula o fatorial de um número natural lido do usuário e exibe as multiplicações
*******************************************************************************/

//#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main() {

    //Configurando língua e limpando a tela
    setlocale (LC_ALL,"portuguese");
    system ("clear");
    
    //Declarando as variaveis
    int num, nro, fatorial=1;
    char opcao;

    do {
        //Solicitando o usuario para digitar um número
        printf("\nPrograma que calcula o fatorial de um número.\n");
        printf("\nDigite um número:\n");
        scanf("%d",&num);
        nro = num;

        if(num > 0) {
            //Calculando o fatorial do número digitado pelo usuário
            //for(fatorial = 1 ; num > 1 ; num--) {
                //printf("\n%d", num);
                //fatorial = fatorial * num;
                //printf("\n%d\n%d\n", fatorial, num);
            //}
            
            while(num > 1) {
                fatorial = fatorial * num;
                num--;
                printf("\n%d\n%d * %d\n%d * %d * %d", nro, nro, num, nro, num, num);
            }

            //Exibindo o fatorial do número digitado pelo usuário
            printf("\nCalculando o fatorial de %d...\n", nro);
            sleep(1);
            printf("\nO fatorial de %d é: %d\n\n", nro, fatorial);
        }
        else {
            printf("\nO número digitado não é um número natural!\n");
            sleep(1);
        }

        //Pedindo pra confirmar se quer continuar
        printf("\nVocê deseja digitar um novo número? Se sim digite \"s\"...\n");
        scanf("%s", &opcao);
        //opcao = getchar();

        if((opcao == 's') || (opcao == 'S')) {
            printf("\nContinuando...\n");
            sleep(1);
            system ("clear");
        }
        else {
            printf("\nVocê finalizou a exeucção do programa.\n\n\nBye!!!\n\n");
            sleep(1);
            system ("clear");
        }
    }
    while((opcao == 's') || (opcao == 'S'));

    return 0;
}