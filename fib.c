#include <stdio.h>
void fib(int n){
     int a=0;
     int b=1;
     int c;
     int i;
     for(i=0;i<n;i++){
         c=a+b;
         if(i%3==0) // putting condition to print every third plaxce
            printf("%d\n", c);
          b=a;
          a=c;
     }
}

int main(){
     int n;
     scanf("%d", &n);
     
     fib(n);
}
