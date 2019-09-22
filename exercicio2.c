/******************************************************************************
    Instituto Federal do Triângulo Mineiro - Uberlândia Centro
    Licenciatura em Computação
    2º Período (2019/2)
    Algoritmo e Programação
    Clarimundo

Lista 1
Exercício 2
Programa que exibe a média aritmética entre dois números inteiros lidos do usuário
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

int main() {

    
    setlocale (LC_ALL,"portuguese");
    system ("clear");
    
    //Declarando as variaveis
    float  n1, n2, media;
    
    printf("\nVamos calcular a média aritmética de dois números...\n");
    printf("\nDigite o primeiro número:\n");
    scanf("%f", &n1);
    printf("\nDigite o segundo número:\n");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("\nCalculando...\n");
    sleep(1);
    printf("\nA média aritimética de %.1f e %.1f é igual a %.1f.\n\n", n1, n2, media);
    
    return 0;
}