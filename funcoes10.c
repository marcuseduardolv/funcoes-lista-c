#include<stdio.h>

somaPares( int a, int b ){
int soma, i ;

for (i= a; i<= b; i++){
    if (i%2 == 0){
        soma = soma + i;
        }
}
printf("A soma dos numeros pares entre %d e %d = %d\n", a, b, soma);
return soma;

}
int main(){
 int a, b;

 scanf("%d %d", &a, &b);

 somaPares(a, b);
return 0;
}
