/******************************************************************************
    Instituto Federal do Triângulo Mineiro - Uberlândia Centro
    Licenciatura em Computação
    2º Período (2019/2)
    Algoritmo e Programação - Clarimundo
    Alisson Fernandes de Paula

Lista 1 - Exercício 1
#IF-AP-L1-E1
Programa que exibe as raízes da equação do segundo grau definida pelo usuário
*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    
    //Configurando lingua e limpando a tela
    setlocale(LC_ALL, "portuguese");
    system("clear");
    
    //Declarando as variaveis
    float a, b, c, delta, x1, x2;
    
    //Titulo do programa
    printf("\nPrograma que exibe as raízes da equação do segundo grau (ax²+bx+cx).\n");
    
    //Solicitando para o usuario digitar os coeficientes
    printf("\nDigite o valor de \'a\': (Deve ser diferente de zero)\n");
    scanf("%f", &a);
    
    if(a != 0) {
        printf("\nDigite o valor de \'b\':\n");
        scanf("%f", &b);
        
        printf("\nDigite o valor de \'c\':\n");
        scanf("%f", &c);
        
        delta = pow(b,2) - 4 * a * c;
        
        if(delta >= 0){
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            printf("\nAs raízes são: \nx1 = %f \nx2 = %f.\n", x1, x2);
        }
        else {
            printf("\nO valor de delta é \'%f\'. Para raízes reias, o valor de delta não pode ser menor do que zero, por favor tente novamente!\n", delta);
        }
    }
    else {
        printf("\nO valor de \'a\' deve ser diferente de zero, por favor tente novamente!\n");
    }
    
    return 0;
}