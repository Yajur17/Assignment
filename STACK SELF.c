# include<stdlib.h>
#include <stdio.h>
# define CAP 5
int stack[CAP];
int top=-1;

int isFull(){
    if(top==CAP-1){
         return 1;
    }
    else{
        return 0;
    }
}

int push(int n){
     if(isFull()){ 
         printf("Stack is overflow\n");
     }
     else{
          top++;
          stack[top]=n;
          printf("%d has been pushed\n", n);
     }
         
}

int isEmpty(){
     if(top==-1){
          return -1;
     }
     else{
          return 0;
     }
}

int pop(){
     if(isEmpty()){
          printf("Stack is underflow\n");
     }
     else{
          return stack[top--];
     }
}

int peek(){
     if(isEmpty()){
          printf("Stack is Empty\n");
     }
     else{
          printf("Element at top is: %d \n",stack[top]);
     }
}


int traverse(){
    int i;
     if(isEmpty()){
          printf("Stack is Empty");
     }
     else{
          for(i=0;i<=top;i++){
            printf("%d\n", stack[i]);   
          }
     }
}

int main()
{
    int n,ele;
    
    
    while(1){
        scanf("%d", &n);
        switch(n){
            
            case 1: 
                printf("\nElement to be pushed: ");
                scanf("%d", &ele);
                push(ele);
                break;
         
             case 2: pop();
                break;
             
            case 3: peek();
                break;
             
             
             case 4: traverse();
                break;
             
             case 5: exit(0);
             default: printf("Invalid input\n");
            
        }
    }
    

    return 0;
}
