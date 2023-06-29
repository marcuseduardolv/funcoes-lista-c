#include<stdio.h>

void sequencia (double x){
int i;
  for (i = 1; i<= x; i++){
    printf ("%4.d\n", i);


  }

}


int main (){
int x;
scanf("%d" , &x);
sequencia (x);


  return 0;
}
