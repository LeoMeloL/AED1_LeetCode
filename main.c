//Link do exercicio no LeetCode: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
//Resumo: Digitar um numero e mostrar o passo a passo até chegar em 0, se é par divide por 2, se é impar subtrai 1.

#include <stdio.h>


int main()
{

    int num, num2, steps;

    printf("Digite o numero: ");
    scanf("%d", &num);
while (num != 0) {

    if (num % 2 == 0) {
    num2 =  num / 2;

    steps++;
    printf("\nStep %d: %d e par, Divide por 2 e obtenha %d", steps, num, num2);
    num = num2;
    }else {
         num2 = num - 1;
    steps++;
    printf("\nStep %d: %d e impar, Diminui 1 e obtenha %d", steps, num, num2);
    num = num2;
}
}
printf("\nTotal de passos: %d", steps);

}