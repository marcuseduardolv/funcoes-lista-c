#include<stdio.h>

void pares (int a, int b, int c){
int cont = 0;
  if (a %2 == 0 && a !=0){
    cont++;
}
 if (b %2 == 0 && b !=0){
    cont++;
 }
 if (c %2 == 0 && c !=0){
    cont++;
 }
 system("cls");
  printf("%d numeros pares " , cont );
return cont;
  }

int main (){
int a, b, c;
scanf("%d %d %d" , &a, &b,&c);
pares (a, b, c);


  return 0;
}
