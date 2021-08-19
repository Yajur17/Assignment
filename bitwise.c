
#include <stdio.h>

int bitAnd(int x, int y){
  x=~x;
  y=~y;
  printf("AND- %d\n", ~(x|y));  
}

int bitXor(int x, int y){
  m=~((~x)&y);
  n=~(x&(~y));
  printf("XOR- %d\n", (~(m&n)));
}

int sign(int x) {
  
  printf("Sign: %d\n",((!!x) | (x >> 31)) );
}

int bang(int x) { 
  printf("Bang: %d\n", (((~x + 1) | x) >> 31) + 1);
}

int conditional(int x, int y, int z) {
  printf("Conditional: %d\n",z ^ ((y ^ z) & ((!x) + ~0)));
}

int logicalShift(int x, int n) {
  printf("Logical: %d\n",(x >> n) & (~(((1 << 31) >> n) << 1)));

int main()
{
    
  int a, b;
  a=5;
  b=6;
  bitAnd(a,b);
  bitXor(a,b);
  sign(a);
  bang(a);
  conditional(2,4,5);
  logicalShift(0x87654321, 4);

}
