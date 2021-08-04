//gcd 
#include <stdio.h>

int main()
{
    int a;
    int b;
    int n;
    scanf("%d %d", &a, &b);

    //returning result of gcd function in n
    n=gcd(a,b);
    
    printf("%d",n);

    return 0;
}

int gcd(int a, int b){
     int i;
     int gcd;
     //looking for the gcd
     for(i=1;i<=a && i<=b;i++){
          if(a%i==0 && b%i==0){
               gcd= i;
          }
     }
     return gcd;
}