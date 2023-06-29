#include<stdio.h>
#include<math.h>
void Raizes (float  a, float b, float c){
float delta, raiz1, raiz2;

   delta = (b*b)- (4* a * c);

  if (delta >= 0){
    raiz1 = (-b + sqrt(delta))/ (2*a);
    raiz2 = (-b - sqrt (delta))/ (2*a);
        printf (" x1 = %.2f", raiz1);
        printf (" x2 = %.2f", raiz2);
  }

  if (delta > 0){
    raiz1 = (-b / (2*a));
        printf (" x1 = %.2f", raiz1);
  }
    else{

        printf ("Nao existe raiz");
}


return 0;
}

int main (){
float a, b, c;
 printf("digite os valores de a, b, e c\n");
 scanf ("%f %f %f", &a, &b, &c);
 Raizes (a, b, c);
return 0;
}
