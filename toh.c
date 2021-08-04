
#include <stdio.h>
int steps=0; // for total steps used in the process 

void toh(int n, int a, int b, int c){
     if(n>0){
         steps++;
          toh(n-1, a,c,b);
          printf("Move disc from %d to %d\n", a,c);
          toh(n-1, b,a,c);
     }
}

int main()
{
    int n;
    int A=1;
    int B=2;
    int C=3;
     
    scanf("%d", &n);
    toh(n,A,B,C);
    printf("Total steps: %d", steps);
    return 0;
}