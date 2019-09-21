/******************************************************************************
    Instituto Federal do Triângulo Mineiro - Uberlândia Centro
    Licenciatura em Computação
    2º Período (2019/2)
    Algoritmo e Programação
    Clarimundo

Lista 1
Exercício 1
Programa que exibe as raízes da equação do segundo grau definida pelo usuário
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <unistd.h>

int main() {

    //Configurando língua e limpando a tela
    setlocale (LC_ALL,"portuguese");
    system ("clear");
    
    //Declarando as variaveis
    float a, b, c, delta, x1, x2;

    printf("\nPrograma que calcula as raízes da equação do segundo grau (ax²+bx+cx).\n");
    
    printf("\nDigite o valor de \'a\': (Deve ser diferente de zero)\n");
    scanf("%f", &a);
    
    if(a != 0) {
        printf("\nDigite o valor de \'b\':\n");
        scanf("%f", &b);
        
        printf("\nDigite o valor de \'c\':\n");
        scanf("%f", &c);
        
        delta = pow(b,2) - 4 * a * c;
        
        if (delta >= 0) {
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            printf("\nCalculando...\n");
            sleep(1);
            printf("\nAs raízes são: \nx1 = %.2f \nx2 = %.2f\n\n", x1, x2);
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
