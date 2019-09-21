/******************************************************************************
    Instituto Federal do Triângulo Mineiro - Uberlândia Centro
    Licenciatura em Computação
    2º Período (2019/2)
    Algoritmo e Programação
    Clarimundo

Lista 1
Exercício 5
Programa que exibe a quantidade e a soma de números pares, ímpares, positivos e negativos, lidos do usuário
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>

int main() {

    //Configurando língua e limpando a tela
    setlocale (LC_ALL,"portuguese");
    system ("clear");
    
    //Declarando as variaveis
    float num, spar=0, simpar=0, spositivo=0, snegativo=0;
    int qpar=0, qimpar=0, qpositivo=0, qnegativo=0;
    
    printf("\nPrograma que exibe a quantidade e soma dos números pares, ímpares, positivos e negativo.\nSe digitar zero é realizado o cálculo e o programa é finalizado.\n");
    
    do {
        //Solicitando os números ao usuário
        printf("\nDigite um número:\n");
        scanf("%f", &num);
        
        //if((num%2) == 0) {
        if((fmod(num, 2) == 0) && num != 0)  {
            qpar++;
            spar = spar + num;
        }
        else if((fmod(num, 2) != 0) && num != 0){
            qimpar++;
            simpar = simpar + num;
        }
        
        if(num > 0) {
            qpositivo++;
            spositivo = spositivo + num;
        }
        else if(num < 0) {
            qnegativo++;
            snegativo = snegativo + num;
        }
        
        if(num == 0) {
            printf("\nCalculando...\n\n");
            sleep(1);
            printf("\nForam digitados %d números pares que somam %.1f.\n", qpar, spar);
            printf("\nForam digitados %d números ímpares que somam %.1f.\n", qimpar, simpar);
            printf("\nForam digitados %d números positivos que somam %.1f.\n", qpositivo, spositivo);
            printf("\nForam digitados %d números negativos que somam %.1f.\n\n", qnegativo, snegativo);
        }
    }
    while(num != 0);
    
    return 0;
}