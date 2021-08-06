#include<stdio.h>

#include<math.h>

void display(int *a, int n)
{
	for(int i=0;i<n;i++)
        {
		printf("%d ",a[i]);
        }
        printf("\n");
}


int rec_smallest_index(int *a, int n, int j, int index)
{
	if(j==n)
		return index;
	else
	{
		if(a[j]<a[index])
		{
			index=j;
		}
                rec_smallest_index(a,n,j+1,index);
        }
}



void selection_sort(int *a, int i,int n)
{

        int temp,index;
        if(i==n-1)
		return;
        else
        {
		index=rec_smallest_index(a,n,i+1,i);
 	
                temp=a[i];
                a[i]=a[index];
                a[index]=temp;
                selection_sort(a,i+1,n);
        }

}

int main()
{
	int n;
        printf("Enter size :\n ");
        scanf("%d",&n);
        int a[n];
        int i,index,j,temp;
        for(i=0;i<n;i++)
        {
		scanf("%d", &a[i]);
        }
        	for(int i=0;i<n;i++)
        {
		printf("%d ",a[i]);
        }
        printf("\n");
        selection_sort(a, 0, n);

        	for(int i=0;i<n;i++)
        {
		printf("%d ",a[i]);
        }
        printf("\n");
        return 0;
}