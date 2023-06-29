#include<stdio.h>

void P_A(int a1, int n, int vn){
int soma;
//a1 = primeiro termo.
//n n-ésimo termo.
//vn é o valor de n.

soma = (vn* (a1 + n))/2;

 printf("A soma dos %d primeiros termos da P.A. e: %d\n", vn, soma);


return soma;
}

int main (){
int a1, n, vn;

printf("digite o primeiro elemento:\n");
scanf("%d", &a1);

printf("digite o n-esimo elemento:\n");
scanf("%d", &n);

printf("digite o valor de n:\n");
scanf("%d", &vn);

 P_A(a1, n, vn);

return 0;
}
