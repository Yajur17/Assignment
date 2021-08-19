
#include <stdio.h>

int main()
{
    int a, b, c, n, i;
    
    //scanning n for the range of fibonacci series
    scanf("%d", &n);
    
    a=0;
    b=1;
    
    for(i=0;i<n;i++){
        c=a+b;
        //applying condition for even numbers
        if(c%2==0){
            //printing even numbers
             printf("%d\n", c);
        }
        a=b;
        b=c;
        
    }

    return 0;
}
