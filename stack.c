//stack 1st question

#include <stdio.h>

int stack[6];
int top = -1;
int Max = 6;

int is_empty ()
{
  
if (top == -1)
      return 1; 
else 
    return 0;
}

int is_full ()
{
if (top == Max)
        return 1;
  else
      return 0; }

void push (int s)
{
if (!is_full ())
    { top = top + 1;
      stack[top] = s; }
  else
    {
      printf ("Stack is full");
    }
}

int pop ()
{
int s;

if (!is_empty ())
    { s=stack[top]; 
     top = top - 1;
     return s; }
  else
    { printf ("Stack is empty");     }
}

int peek(){
     return stack[top];
}
 

int main () 
{
 int i=0;
 while(!is_full()){
     i=i+1;
     push(i);
 }
if(is_full()){
     printf("Stack is full");
  
printf("Element at top: %d\n", peek()); 
 
while (!is_empty ())
    {
      int s = pop ();
      printf ("%d\n", s);
    } 
}
if(is_empty()){
     printf("Stack is empty");
}
return 0;
}