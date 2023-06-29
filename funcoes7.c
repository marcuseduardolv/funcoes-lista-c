#include<stdio.h>

int somadenumeros (int a, int b, int c){
int soma, maior,  menor;
maior = a;
menor = b ;
  if ( b > a){
   maior = b;
  }
  if ( c > b ){
    maior = c;
    }
   if (a < b){
    menor = a;

   }
   if (c < a){

    menor = c;
   }
    soma = maior + menor;

 system("cls");
  printf("%d" , soma);
return somadenumeros;
  }

int main(){
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
 somadenumeros(a, b, c);



return 0;
}
