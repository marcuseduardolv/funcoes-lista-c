#include<stdio.h>

void emprestimo(float c, float m, float pcj){
float soma;
//c = valor do emprestimo.
//m meses.
//pcj  é a porcentagem dos juros.
pcj = pcj/100;
soma = c*m*pcj;

 printf("O valor de juros e R$ %.2f ", soma);

return soma;
}

int main (){
float c, m, pcj;

printf("digite o valor do emprestimo ");
scanf("%f", &c);

printf("digite a quantidade de meses ");
scanf("%f", &m);

printf("digite a porcentagem de juros ");
scanf("%f", &pcj);

emprestimo(c, m, pcj);

return 0;
}
