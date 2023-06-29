#include<stdio.h>

divisores( int a){
int  i ;

for (i = 1; i<= a; i++){
    if (a % i == 0){
        printf("%d\n", i);
        }
}

return i;

}
int main(){
 int a;

 scanf("%d", &a);

 divisores(a);
return 0;
}
