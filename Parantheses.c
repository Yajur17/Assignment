#include<stdio.h>
#define size 50
char cstack[size];
int top=-1;
void push(char c)
{
    if(top==size-1)
    printf("STACK FULL \n");
    else{
        top++;
        cstack[top]=c;
    }
}
char pop()
{
    char x=-1;
    if(top==-1)
    printf("Stack Empty!!\n");
    else{
        x=cstack[top];
        top--;
    }
    return x;
}
int isEmpty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

int main()
{
    char str[100];
    char ch;
    int flag=1;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        push(str[i]);
        else if(str[i]==')')
        {
            ch=pop();
            if(ch!='(')
            {
            flag=0;
            break;
            }
        }
        else if(str[i]==']')
        {
            ch=pop();
            if(ch!='[')
            {
            flag=0;
            break;
            }
        }
        else if(str[i]=='}')
        {
            ch=pop();
            if(ch!='{')
            {
            flag=0;
            break;
            }
        }
    }
    if(isEmpty() && flag==1)
    printf("true\n");
    else
    printf("false\n");
    return 0;
}