#include <stdio.h>
#include <string.h>

//ques 11- find occurence
int any(char *s1, char *s2)
{
    int j,i,l1=0,l2=0;
    while(s1[l1]!='\0')
    {
	    l1++;
    }
    while(s2[l2]!='\0')
    {
	    l2++;
    }
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(s1[i]==s2[j])
            return i;
        }
    }
    //if no common character
    return -1;
}

int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int index=any(str1,str2);
    printf("%d\n",index);

    return 0;
}