/******************************************************************************
    Instituto Federal do Triângulo Mineiro - Uberlândia Centro
    Licenciatura em Computação
    2º Período (2019/2)
    Algoritmo e Programação
    Clarimundo

Lista 1
Exercício 3
Programa que exibe o tipo de triângulo formado de lados lidos do usuário
*******************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    //Configurando língua e limpando a tela
    setlocale (LC_ALL,"portuguese");
    system ("clear");
    
    //Declarando as variaveis
    float ladoA, ladoB, ladoC;
    
    printf("\nPrograma para descobrir o tipo de triângulo.\n");
    printf("\nDigite o valor do primeiro lado:\n");
    scanf("%f", &ladoA);

    if(ladoA > 0) {
        printf("\nDigite o valor do segundo lado:\n");
        scanf("%f", &ladoB);
        if(ladoB > 0) {
            printf("\nDigite o valor do terceiro lado:\n");
            scanf("%f", &ladoC);
            if(ladoC > 0) {
                if((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA)) {
                    printf("\nOK! Os lados digitados formam um triângulo, verificando o tipo...\n");
                    sleep(1);
                    if((ladoA == ladoB) && (ladoA == ladoC)) {
                        printf("\nOs lados %.1f, %.1f e %.1f formam um triângulo equilátero.\n\n!", ladoA, ladoB, ladoC);
                    }
                    else if ((ladoA != ladoB) && (ladoA != ladoC) && (ladoB != ladoC)) {
                        printf("\nOs lados %.1f, %.1f e %.1f formam um triângulo escanelo.\n\n!", ladoA, ladoB, ladoC);
                    }
                    else {
                        printf("\nOs lados %.1f, %.1f e %.1f formam um triângulo isosceles.\n\n!", ladoA, ladoB, ladoC);
                    }
                }
                else {
                    printf("\nOs lados digitados não formam um triângulo, pois a soma de 2 lados deve ser maior que o terceiro lado. Por favor, tente novamente!");
                }
            }
            else {
                printf("\nO lado deve ser maior do que zero. Por favor, tente novamente!");
            }
        }
        else {
            printf("\nO lado deve ser maior do que zero. Por favor, tente novamente!");
        }
    }
    else {
        printf("\nO lado deve ser maior do que zero. Por favor, tente novamente!");
    }
    
    //system ("clear");
    return 0;
    
}