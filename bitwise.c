
#include <stdio.h>

int bitAnd(int x, int y){
  
  x=~x;
  y=~y;
  
  printf("AND- %d\n", ~(x|y));
  
  
}


int bitAnd(int x, int y){
  
  int a, b, m, n;
  a=x;
  b=y;
  
  m=~((~x)&y);
  n=~(x&(~y));
  
  printf("XOR- %d\n", (~(m&n)));
}



int main()
{
    
  int a, b;
  a=5;
  b=6;
  
  bitAnd(a,b);
  bitXor(a,b);
  
  
  
}

