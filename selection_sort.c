#include <stdio.h>
#include<stdlib.h>
#include <sys/time.h>

int main()
{
    int n;
    printf("Enter size:\n");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
       a[i]=rand();//for random
    }

    struct timeval e;
    gettimeofday(&e,NULL);

    long start=e.tv_sec*1000+e.tv_usec/1000;
    //SELECTION SORT
    int j,temp,ct=0,min_index;
    for(i=0;i<n-1;i++)
    {
	    min_index=i;
	    for(j=i+1;j<n;j++)
	    {
		    if(a[min_index]>a[j])
			    min_index=j;
	    }
	    temp=a[i];
	    a[i]=a[min_index];
	    a[min_index]=temp;
    }

    gettimeofday(&e,NULL);
    long end=e.tv_sec*1000+e.tv_usec/1000;
    printf("%ld\n",end-start);

    return 0;
}