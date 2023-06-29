#include<stdio.h>

void formageometrica (int b, int h){
int forma;
  if ( b == h){

        forma = 1;
}
 if (b =! h){
   forma == 0;

 }

 system("cls");
  printf("%d" , forma);
return forma;
  }

int main (){
int b, h ;
scanf("%d  %d" , &b, &h);
formageometrica (b, h );


  return 0;
}
