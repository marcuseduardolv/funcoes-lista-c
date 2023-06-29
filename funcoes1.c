#include<stdio.h>

double Delta(double a , double b, double c){
    double  d = (b*b)- (4* a * c);
return d;

}
int main (){
double a, b, c;
scanf("%lf %lf %lf", &a, &b, &c);
 double d = Delta(a, b, c);
 printf("%lf\n", d);

  return 0;
}
