
#include <stdio.h>

void swap(int *a, int *b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
}

int bubblesort(int ar[], int n){
    int i, j;
   for (i = 0; i < n; i++)
       for (j = 0; j < n-i; j++) 
           if (ar[j] > ar[j+1])
              swap(&ar[j], &ar[j+1]); 
}

int main()
{
    int n,k, i, min=2147483647;
    
    printf("n= , k= ");
    scanf("%d %d", &n, &k);
    
    
     int a[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        }
    
    bubblesort(a, n);
    
             printf("Kth small value: %d", a[k-1]);
            
    
    
    
    return 0;
}
