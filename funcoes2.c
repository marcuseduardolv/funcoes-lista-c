#include<stdio.h>

float  maior (float x , float y){
  float m;
    if ( x > y){
        m = x;
    } else{
    m = y;
    }

   return m;
}


int main (){
float x, y;
scanf("%f %f", &x , &y);
float m = maior(x, y);
 printf("%lf\n", m);

  return 0;
}
